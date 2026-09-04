/*
Product Launch Decision Tree Program v1.0.0
By Garvin Yu
July 23, 2026
*/
#include <iostream>

using namespace std;

void decisionTree();

int main() {
    decisionTree();
}

void decisionTree() {
    int userChoice;

    cout << "Which product should the company launch?" << endl;
    cout << "  0. AI Writing Tool - Cost: $60K" << endl;
    cout << "  1. Time-Tracking App - Cost: $40K" << endl;
    cout << "  2. Design Plugin - Cost: $30K" << endl;
    cout << "Enter #: ";
    cin >> userChoice;
    cout << endl;

    if (userChoice == 0) {
        cout << "Pick Revenue Scale:" << endl;
        cout << "0. Large revenue (35%)\t1. Small revenue (65%)" << endl;
        cout << "Enter #: ";
        cin >> userChoice;
        cout << endl;
        cout << "The company will launch the AI Writing Tool for $60K." << endl;
        if (userChoice == 0)
            cout << "Revenue Amount: $180K\tExpected Value: (180K \u00D7 0.35) + (90K \u00D7 0.65) - 60K = $106.5K" << endl;
        else if (userChoice == 1)
            cout << "Revenue Amount: $90K\tExpected Value: (180K \u00D7 0.35) + (90K \u00D7 0.65) - 60K = $106.5K" << endl;
        else
            cout << "Invalid Input. Exiting Program." << endl;
    } else if (userChoice == 1) {
        cout << "Pick Revenue Scale:" << endl;
        cout << "0. Large revenue (50%)\t1. Small revenue (50%)" << endl;
        cout << "Enter #: ";
        cin >> userChoice;
        cout << endl;
        cout << "The company will launch the Time-Tracking App for $40K." << endl;
        if (userChoice == 0)
            cout << "Revenue Amount: $120K\tExpected Value: (120K \u00D7 0.5) + (60K \u00D7 0.5) - 40K = $50K" << endl;
        else if (userChoice == 1)
            cout << "Revenue Amount: $60K\tExpected Value: (120K \u00D7 0.5) + (60K \u00D7 0.5) - 40K = $50K" << endl;
        else
            cout << "Invalid Input. Exiting Program." << endl;
    } else if (userChoice == 2) {
        cout << "Pick Revenue Scale:" << endl;
        cout << "0. Large revenue (40%)\t1. Small revenue (60%)" << endl;
        cout << "Enter #: ";
        cin >> userChoice;
        cout << endl;
        cout << "The company will launch the Design Plugin for $30K." << endl;
        if (userChoice == 0)
            cout << "Revenue Amount: $100K\tExpected Value: (100K \u00D7 0.4) + (40K \u00D7 0.6) - 30K = $34K" << endl;
        else if (userChoice == 1)
            cout << "Revenue Amount: $40K\tExpected Value: (100K \u00D7 0.4) + (40K \u00D7 0.6) - 30K = $34K" << endl;
        else
            cout << "Invalid Input. Exiting Program." << endl;
    } else {
        cout << "Invalid Input. Exiting Program." << endl;
    }
}

//Path 0.0 Output:
/*
    Which product should the company launch?
      0. AI Writing Tool - Cost: $60K
      1. Time-Tracking App - Cost: $40K
      2. Design Plugin - Cost: $30K
    Enter #: 0

    Pick Revenue Scale:
    0. Large revenue (35%)	1. Small revenue (65%)
    Enter #: 0

    The company will launch the AI Writing Tool for $60K.
    Revenue Amount: $180K	Expected Value: (180K × 0.35) + (90K × 0.65) - 60K = $106.5K
*/
//Path 0.1 Output:
/*
    Which product should the company launch?
      0. AI Writing Tool - Cost: $60K
      1. Time-Tracking App - Cost: $40K
      2. Design Plugin - Cost: $30K
    Enter #: 0

    Pick Revenue Scale:
    0. Large revenue (35%)	1. Small revenue (65%)
    Enter #: 1

    The company will launch the AI Writing Tool for $60K.
    Revenue Amount: $90K	Expected Value: (180K × 0.35) + (90K × 0.65) - 60K = $106.5K
*/
//Path 1.0 Output:
/*
    Which product should the company launch?
      0. AI Writing Tool - Cost: $60K
      1. Time-Tracking App - Cost: $40K
      2. Design Plugin - Cost: $30K
    Enter #: 1

    Pick Revenue Scale:
    0. Large revenue (50%)	1. Small revenue (50%)
    Enter #: 0

    The company will launch the Time-Tracking App for $40K.
    Revenue Amount: $120K	Expected Value: (120K × 0.5) + (60K × 0.5) - 40K = $50K
*/
//Path 1.1 Output:
/*
    Which product should the company launch?
      0. AI Writing Tool - Cost: $60K
      1. Time-Tracking App - Cost: $40K
      2. Design Plugin - Cost: $30K
    Enter #: 1

    Pick Revenue Scale:
    0. Large revenue (50%)	1. Small revenue (50%)
    Enter #: 1

    The company will launch the Time-Tracking App for $40K.
    Revenue Amount: $60K	Expected Value: (120K × 0.5) + (60K × 0.5) - 40K = $50K
*/
//Path 2.0 Output:
/*
    Which product should the company launch?
      0. AI Writing Tool - Cost: $60K
      1. Time-Tracking App - Cost: $40K
      2. Design Plugin - Cost: $30K
    Enter #: 2

    Pick Revenue Scale:
    0. Large revenue (40%)	1. Small revenue (60%)
    Enter #: 0

    The company will launch the Design Plugin for $30K.
    Revenue Amount: $100K	Expected Value: (100K × 0.4) + (40K × 0.6) - 30K = $34K
*/
//Path 2.1 Output:
/*
    Which product should the company launch?
      0. AI Writing Tool - Cost: $60K
      1. Time-Tracking App - Cost: $40K
      2. Design Plugin - Cost: $30K
    Enter #: 2

    Pick Revenue Scale:
    0. Large revenue (40%)	1. Small revenue (60%)
    Enter #: 1

    The company will launch the Design Plugin for $30K.
    Revenue Amount: $40K	Expected Value: (100K × 0.4) + (40K × 0.6) - 30K = $34K
*/
