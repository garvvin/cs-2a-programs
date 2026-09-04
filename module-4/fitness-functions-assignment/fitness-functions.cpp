/*
Fitness Functions Program v1.0.0
By Garvin Yu
*/
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

float BMI(float height, float weight) {
    //Height in meters, weight in kilograms
    float bmi = weight / pow(height, 2.0); //BMI formula: weight / (height ^ 2)
    return bmi;
}
void print_profile(string name, int age, float height = 1.65, float weight = 70){
    cout << "Profile Report\nName: " << name << "\nAge: " <<  age << " years\nBMI: " << BMI(height, weight) << endl;
}
float check_progress(int steps, int goal) {
    float progressPct = (float)steps / (float)goal;
    return progressPct;
}

int main() {
    cout << "Welcome to Garvin's Fitness Functions\n" << endl;
    print_profile("Garvin Yu", 18, 1.7, 61.23);
    cout << "\nToday's Step Progress: " << check_progress(8000, 20000) << endl;
}

//Output:
/*
    Welcome to Garvin's Fitness Functions

    Profile Report
    Name: Garvin Yu
    Age: 18 years
    BMI: 21.1868

    Today's Step Progress: 0.4
*/
