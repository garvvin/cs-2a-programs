/*
5* Program
By Ishaan Mittal
*/
#include <iostream>
using namespace std;

int main()
{
    int count = 0;

    cout << "How many asterisks would you like to display? ";
    cin >> count;

    for (int i = 1; i <= count; i++) //Logic error was here. In the condition, count + 1 was used instead of just count.
    {                                //It causes the loop to stop after count is 1 past the desired # of stars.
        cout << "*";                 //Fixed by simply removing the "+1" from the condition.
    }

    cout << "\n";

    return 0;
}
