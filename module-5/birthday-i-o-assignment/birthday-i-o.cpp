/*
Birthday I/O Program v1.0.0
By Garvin Yu
*/
#include <iostream>
#include <string>

using namespace std;

void printEUBirthDate() {
    string month, day;
    int date, year;

    //Gather user input
    cout << "Please enter a birthday below.\n";
    cout << "Month: ";
    cin >> month;
    cout << "Date: ";
    cin >> date;
    cout << "Year: ";
    cin >> year;
    cout << "Do you know what day of the week that was? If not guess!\n";
    cin >> day;

    //Log formatted output
    cout << "\nIn Europe, that is:\n" << day << " " << date << " " << month << " " << year << endl;
}

int main() {
    printEUBirthDate();
}

//Sample Output 1:
/*
    Please enter a birthday below.
    Month: March
    Date: 7
    Year: 2008
    Do you know what day of the week that was? If not guess!
    Monday

    In Europe, that is:
    Monday 7 March 2008
*/
//Sample Output 2:
/*
    Please enter a birthday below.
    Month: August
    Date: 1
    Year: 2011
    Do you know what day of the week that was? If not guess!
    Saturday

    In Europe, that is:
    Saturday 1 August 2011
*/
