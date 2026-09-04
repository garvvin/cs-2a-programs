/*
Mad Lib Program
By Alissa Davignon
*/
#include <iostream>
#include <string>
using namespace std;

void madLibs(string& madLib){
    string fruit;
    string emotion;
    cout << "Please enter a fruit: ";
    cin >> fruit;
    cout << "Please enter an emotion: ";
    cin >> emotion;
    madLib = "One day, I found a magical " + fruit + " and it told me I would be " + emotion + " for the rest of my life." + "\n";
}

int main() {
    string madLib;
    madLibs(madLib);
    cout << "\n" + madLib << endl;
}
