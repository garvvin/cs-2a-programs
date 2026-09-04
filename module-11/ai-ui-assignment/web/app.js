function initUI() {
  const heightSlider = document.getElementById('height-slider');
  const heightInput = document.getElementById('height-input');
  const weightSlider = document.getElementById('weight-slider');
  const weightInput = document.getElementById('weight-input');
  const bmiValue = document.getElementById('bmi-value');
  const bmiCategory = document.getElementById('bmi-category');

  const stepsInput = document.getElementById('steps-input');
  const goalInput = document.getElementById('goal-input');
  const ringFill = document.getElementById('ring-fill');
  const ringHandle = document.getElementById('ring-handle');
  const ringWrapper = document.getElementById('ring-wrapper');
  const progressText = document.getElementById('progress-text');

  const nameInput = document.getElementById('name-input');
  const ageInput = document.getElementById('age-input');
  const profileHeight = document.getElementById('profile-height');
  const profileWeight = document.getElementById('profile-weight');
  const profileOutput = document.getElementById('profile-output');

  function updateBMI() {
    const h = parseFloat(heightInput.value) || 1.70;
    const w = parseFloat(weightInput.value) || 61.23;
    const bmi = Module.BMI(h, w);
    const cat = Module.bmi_category(bmi);

    bmiValue.textContent = bmi.toFixed(1);
    bmiCategory.textContent = cat;
    bmiCategory.setAttribute('data-cat', cat);
  }

  var RING_RADIUS = 80;
  var RING_CX = 100;
  var RING_CY = 100;
  var CIRCUMFERENCE = 2 * Math.PI * RING_RADIUS;

  function fractionToOffset(f) {
    return CIRCUMFERENCE * (1 - f);
  }

  function fractionToHandle(f) {
    var angle = f * 2 * Math.PI;
    return {
      x: RING_CX + RING_RADIUS * Math.sin(angle),
      y: RING_CY - RING_RADIUS * Math.cos(angle)
    };
  }

  function setRing(fraction) {
    ringFill.style.strokeDashoffset = fractionToOffset(fraction);
    var pos = fractionToHandle(fraction);
    ringHandle.setAttribute('cx', pos.x.toFixed(1));
    ringHandle.setAttribute('cy', pos.y.toFixed(1));
    var displayPct = (fraction * 100).toFixed(1);
    progressText.textContent = displayPct + '%';
  }

  function updateSteps() {
    var steps = parseInt(stepsInput.value) || 0;
    var goal = parseInt(goalInput.value) || 1;
    var pct = Module.check_progress(steps, goal);
    var clamped = Math.min(1, Math.max(0, pct));
    setRing(clamped);
  }

  function pointerToFraction(e) {
    var rect = ringWrapper.getBoundingClientRect();
    var scaleX = 200 / rect.width;
    var scaleY = 200 / rect.height;
    var clientX, clientY;
    if (e.touches) {
      clientX = e.touches[0].clientX;
      clientY = e.touches[0].clientY;
    } else {
      clientX = e.clientX;
      clientY = e.clientY;
    }
    var rx = (clientX - rect.left) * scaleX;
    var ry = (clientY - rect.top) * scaleY;
    var dx = rx - RING_CX;
    var dy = RING_CY - ry;
    var angle = Math.atan2(dx, dy);
    if (angle < 0) angle += 2 * Math.PI;
    return angle / (2 * Math.PI);
  }

  var dragging = false;

  function onDragStart(e) {
    e.preventDefault();
    dragging = true;
    ringHandle.setAttribute('r', '10');
  }

  function onDragMove(e) {
    if (!dragging) return;
    e.preventDefault();
    var fraction = pointerToFraction(e);
    var goal = parseInt(goalInput.value) || 1;
    var steps = Math.round(fraction * goal);
    if (steps < 0) steps = 0;
    if (steps > goal) steps = goal;
    stepsInput.value = steps;
    setRing(Module.check_progress(steps, goal));
  }

  function onDragEnd() {
    if (!dragging) return;
    dragging = false;
    ringHandle.setAttribute('r', '8');
  }

  ringHandle.addEventListener('mousedown', onDragStart);
  ringHandle.addEventListener('touchstart', onDragStart, { passive: false });
  document.addEventListener('mousemove', onDragMove);
  document.addEventListener('touchmove', onDragMove, { passive: false });
  document.addEventListener('mouseup', onDragEnd);
  document.addEventListener('touchend', onDragEnd);

  function updateProfile() {
    const name = nameInput.value || 'Garvin Yu';
    const age = parseInt(ageInput.value) || 18;
    const h = parseFloat(profileHeight.value) || 1.70;
    const w = parseFloat(profileWeight.value) || 61.23;

    const report = Module.get_profile(name, age, h, w);
    const lines = report.split('\n').filter(function (l) { return l.trim(); });
    var fields = {};
    for (var i = 0; i < lines.length; i++) {
      var m = lines[i].match(/^(.+?):\s*(.+)$/);
      if (m) fields[m[1].trim()] = m[2].trim();
    }
    var bmiPart = (fields['BMI'] || '--').match(/^([\d.]+)\s*\((.+)\)$/);
    var bmiNum = bmiPart ? bmiPart[1] : fields['BMI'] || '--';
    var bmiCat = bmiPart ? bmiPart[2] : '';

    profileOutput.innerHTML =
      '<div class="profile-field"><span class="profile-field-label">Name</span><span class="profile-field-value">' + (fields['Name'] || name) + '</span></div>' +
      '<div class="profile-field"><span class="profile-field-label">Age</span><span class="profile-field-value">' + (fields['Age'] || age + ' years') + '</span></div>' +
      '<div class="profile-field"><span class="profile-field-label">Height</span><span class="profile-field-value">' + h.toFixed(2) + ' m</span></div>' +
      '<div class="profile-field"><span class="profile-field-label">Weight</span><span class="profile-field-value">' + w.toFixed(1) + ' kg</span></div>' +
      '<div class="profile-field"><span class="profile-field-label">BMI</span><span class="profile-field-value"><strong>' + bmiNum + '</strong> <span class="profile-bmi-cat">' + bmiCat + '</span></span></div>';
  }

  function syncAll() {
    updateBMI();
    updateSteps();
    updateProfile();
  }

  var syncing = false;

  function syncHeightFromBMI() {
    if (syncing) return;
    syncing = true;
    profileHeight.value = heightInput.value;
    syncing = false;
  }

  function syncWeightFromBMI() {
    if (syncing) return;
    syncing = true;
    profileWeight.value = weightInput.value;
    syncing = false;
  }

  function syncHeightFromProfile() {
    if (syncing) return;
    syncing = true;
    heightSlider.value = profileHeight.value;
    heightInput.value = profileHeight.value;
    syncing = false;
  }

  function syncWeightFromProfile() {
    if (syncing) return;
    syncing = true;
    weightSlider.value = profileWeight.value;
    weightInput.value = profileWeight.value;
    syncing = false;
  }

  heightSlider.addEventListener('input', function () {
    heightInput.value = this.value;
    syncHeightFromBMI();
    updateBMI();
    updateProfile();
  });
  heightInput.addEventListener('input', function () {
    heightSlider.value = this.value;
    syncHeightFromBMI();
    updateBMI();
    updateProfile();
  });
  weightSlider.addEventListener('input', function () {
    weightInput.value = this.value;
    syncWeightFromBMI();
    updateBMI();
    updateProfile();
  });
  weightInput.addEventListener('input', function () {
    weightSlider.value = this.value;
    syncWeightFromBMI();
    updateBMI();
    updateProfile();
  });

  stepsInput.addEventListener('input', updateSteps);
  goalInput.addEventListener('input', updateSteps);

  nameInput.addEventListener('input', updateProfile);
  ageInput.addEventListener('input', updateProfile);
  profileHeight.addEventListener('input', function () {
    syncHeightFromProfile();
    updateBMI();
    updateProfile();
  });
  profileWeight.addEventListener('input', function () {
    syncWeightFromProfile();
    updateBMI();
    updateProfile();
  });

  syncAll();
}
