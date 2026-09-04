/*
Roller Coaster Entry Program v1.0.0
By Garvin Yu
*/
#include <iostream>

using namespace std;

void RollerCoasterEntry()
{
    float height; //In meters
    cout << "How tall are you? (meters): ";
    cin >> height;

    if (height > 0 && height < 1)
        cout << "You are not tall enough for this ride." << endl;
    else
        cout << "You can go on this ride." << endl;
}

int main()
{
    RollerCoasterEntry();
}
