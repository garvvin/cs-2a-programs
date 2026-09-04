#include <iostream>
int main () {
    double rectangleLength = 8.0;
    double rectangleWidth = 4.0;
    double rectangleArea;
    double rectanglePerimeter;

    //Rectagnle Area Calculation
    rectangleArea = rectangleLength * rectangleWidth;

    //Rectangle Perimeter Calculation
    rectanglePerimeter = 2 * (rectangleLength + rectangleWidth);

    //Print Rectangle Area
    std::cout << "The area of the rectangle is: " << rectangleArea << std::endl;
    //Print Rectangle Perimeter
    std::cout << "The perimeter of the rectangle is: " << rectanglePerimeter << std::endl;
}
