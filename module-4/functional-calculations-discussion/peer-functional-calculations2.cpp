/*
Circle Area Program
By Roberto Gutierrez
*/
#include <iostream>

using namespace std;

float circleArea(float radius){
    float piValue = 3.14159;
    float area = piValue * radius * radius;
    return area;
}

int main(){
    float radius = 3;
    cout << "Circle Area: " << circleArea(radius) << endl;
}
