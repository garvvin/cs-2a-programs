/*
Lab Experiment Temperature Program v1.0.0
By Garvin Yu
*/
#include <iostream>

using namespace std;

int main() {
    float minTemp = 21.2, maxTemp = 26.6;
    float selectedTemp;

    cout << "Please enter a temperature within the range " << minTemp << "\u00b0C - " << maxTemp << "\u00b0C for the lab experiment:\n";
    cin >> selectedTemp;
    while (selectedTemp > minTemp || selectedTemp < maxTemp) {
        cout << selectedTemp << " is not within range. Please try again (" << minTemp << "\u00b0C - " << maxTemp << "\u00b0C):\n";
        cin >> selectedTemp;
    }
    cout << selectedTemp << "\u00b0C successfully selected as the lab experiment temperature!" << endl;
}
