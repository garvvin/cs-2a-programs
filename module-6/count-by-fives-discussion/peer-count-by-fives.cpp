/*
Count By Fives Program
By Alissa Davignon
*/
#include <iostream>

using namespace std;

void Loops (){
    int num1=0;
    int num2=0;
    int counter=0;
    cout<< "Please enter an integer: " << endl;
    cin>> num1;
    cout << "Please enter a second integer:" << endl;
    cin>> num2;
    while(num1>num2)
    {
        cout << "Second number must be greater than first number, please try again." << endl;
        cin >> num2;
    }
    counter=num1;

    for (int i=0; counter<=num2; i++)
    {
        cout<< counter << " ";
        counter = counter + 5;
    }
    cout << endl;
}

int main() {
    Loops();
}
