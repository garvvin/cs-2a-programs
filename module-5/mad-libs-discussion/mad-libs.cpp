/*
Mad Lib Program v1.0.0
By Garvin Yu
*/
#include <iostream>
#include <string>

using namespace std;

//Full Mad Lib Story
/*
Once upon a time, there was a student named _.
_ worked really hard and had just finished their final 1 month from now.
To celebrate, _ went to _.
*/
void madLibs(string& completedMadLib) {
    completedMadLib = "Once upon a time, there was a student named ";

    string studentName;
    cout << "Please enter your name: ";
    getline(cin, studentName);

    string favoriteRestaurant;
    cout << "Please enter your favorite restaurant: ";
    getline(cin, favoriteRestaurant);

    completedMadLib = completedMadLib + studentName +
        ".\n" + studentName + " had worked really hard and just finished their final 1 month from now."
        "\nTo celebrate, " + studentName + " went to " + favoriteRestaurant + ".";
}

int main() {
    string finalMadLib;
    madLibs(finalMadLib);
    cout << "\n" + finalMadLib << endl;
}
