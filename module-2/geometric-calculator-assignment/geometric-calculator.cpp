/*
Geometric Calculator Program
v1.0.0
*/
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

int main() {
    /*
    Circle Measurements Calculator v1.1.0
    Created by Garvin Yu (me)
    */
    //Input Variable (Circle Radius)
    float radius = 5;

    //Output Calculations (Circle Measurements)
    float pi = (float)M_PI;
    float diameter = 2 * radius;
    float circumference = 2 * pi * radius;
    float circleArea = pi * pow(radius, 2.0);

    std::cout << "Given Radius: " << radius << "\nDiameter: " << diameter << "\nCircumference: " << circumference << "\nArea: " << circleArea << std::endl;
    std::cout << "\n"; //Creates space for readability & separation of programs
    /*
    2D Distance Calculator v1.0.0
    Created by Garvin Yu (me)
    */
    //Input Variables (2 x-y coordinate pairs)
    float x1 = 3.0, y1 = 3.0;
    float x2 = -3.0, y2 = -3.0;

    //Output Calculations (2D Distance)
    float distance = sqrt((double)(pow(x2 - x1, 2.0) + pow(y2 - y1, 2.0)));

    std::cout << "Given Points: (" << x1 << ", " << y1 << "), (" << x2 << ", " << y2 << ")\n" << "Distance: " << distance << std::endl;
    std::cout << "\n";
    /*
    Rectangle Measurements Calculator v1.0.0
    Created by Keion Ashjaee-Marshall
    */
    double rectangleLength = 8.0;
    double rectangleWidth = 4.0;
    double rectangleArea = 0.0;
    double rectanglePerimeter = 0.0;

    //Rectagnle Area Calculation
    rectangleArea = rectangleLength * rectangleWidth;

    //Rectangle Perimeter Calculation
    rectanglePerimeter = 2 * (rectangleLength + rectangleWidth);

    //Print Rectangle Area
    std::cout << "The area of the rectangle is: " << rectangleArea << std::endl;
    //Print Rectangle Perimeter
    std::cout << "The perimeter of the rectangle is: " << rectanglePerimeter << std::endl;
    std::cout << "\n";
    /*
    Hypotenuse Calculator v1.0.0
    Created by Melyssa Kimura
    */
    using namespace std;
    // Pythagorean Theorem - Solving for the length of the hypotenuse
    double leg_a = 3;
    double leg_b = 5;
    double hypotenuse_c = sqrt(leg_a * leg_a + leg_b * leg_b);
    cout << "The hypotenuse is " << hypotenuse_c << endl;
}

//Output:
/*
    Given Radius: 5
    Diameter: 10
    Circumference: 31.4159
    Area: 78.5398

    Given Points: (3, 3), (-3, -3)
    Distance: 8.48528

    The area of the rectangle is: 32
    The perimeter of the rectangle is: 24

    The hypotenuse is 5.83095
*/
