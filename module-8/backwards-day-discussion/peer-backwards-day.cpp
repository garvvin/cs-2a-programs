
//Ali Davignon: Backwards Day
#include <iostream>
#include <string>
using namespace std;

//Classmate's Function
void temperatureExtreme(){
    int temp;
    cout << "What was the temperature at noon today? (in degrees Fahrenheit)" << endl;
    cin >> temp;

    if (temp > -40 && temp < 100)
        cout << "Thank you for recording the temperature." << endl;
    else
        cout << "You entered a temperature that is outside of our thermometer range of measurement." << endl;
}

//My function
void temperatureExtremeReverse() {
    int temp;
    cout << "What was the temperature at noon today? (in degrees Fahrenheit)" << endl;
    cin >> temp;

    if (temp < -40 || temp > 100)
        cout << "You entered a temperature that is outside of our thermometer range of measurement." << endl;
    else
        cout << "Thank you for recording the temperature." << endl;
}

//Main function
int main() {
    cout << "Alissa's Function\n";
    temperatureExtreme();
    cout << "\nGarvin's Function\n";
    temperatureExtremeReverse();
}
