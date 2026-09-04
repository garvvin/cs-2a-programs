/*
Triangle Hypotenuse Program
By Daniel Dunavetsky
*/
#include <iostream>
#include <cmath>

using namespace std;

float PythagoreanTheorem(float lega, float legb){
    float hyp = sqrt(pow(lega, 2)+ pow(legb, 2));
    return hyp;
}

int main() {
    float lega = 5;
    float legb = 7;
    cout << "The hypotenuse of your triangle is " << PythagoreanTheorem(lega, legb) << endl;
}
