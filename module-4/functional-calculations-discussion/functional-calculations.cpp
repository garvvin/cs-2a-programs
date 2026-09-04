/*
Circle Area Program
v2.0.0
*/
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

using namespace std;
const float pi = (float)M_PI;

float calcCircleArea(float& radius) {
    float circleArea = pi * pow(radius, 2.0);
    return circleArea;
}

int main() {
    //Input Variable (Circle Radius)
    float radius = 5.0;

    //Output Calculations (Circle Area)
    float circleArea = calcCircleArea(radius);

    cout << "Given Radius: " << radius << "\nCircle Area: " << circleArea << std::endl;
}
