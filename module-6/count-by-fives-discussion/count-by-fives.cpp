/*
Count By Fives Program v1.0.0
By Garvin Yu
*/
#include <iostream>

using namespace std;

void countByFives() {
    int firstInteger;
    int secondInteger;
    cout << "Enter your first integer: ";
    cin >> firstInteger;
    cout << "Enter your second integer: ";
    cin >> secondInteger;
    while (secondInteger < firstInteger) {
        cout << "Second integer can't be less than the first.\n";
        cout << "Enter your second integer: ";
        cin >> secondInteger;
    }

    for (int i = firstInteger; i <= secondInteger; i += 5) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    countByFives();
}
