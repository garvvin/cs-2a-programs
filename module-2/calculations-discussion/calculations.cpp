/*
Circle Measurements Program
v1.0.0
*/
#include <iostream>
#include <cmath>

int main() {
    //Input Variable (Circle Radius)
    float radius = 5;

    //Output Calculations (Circle Measurements)
    float pi = (float)M_PI;
    float diameter = 2 * radius;
    float circumference = 2 * pi * radius;
    float circleArea = pi * pow(radius, 2.0);

    std::cout << "Given Radius: " << radius << "\n\nDiameter: " << diameter << "\nCircumference: " << circumference << "\nArea: " << circleArea << std::endl;
}
