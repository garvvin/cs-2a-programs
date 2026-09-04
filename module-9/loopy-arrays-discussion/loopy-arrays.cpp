/*
Average Height Program v1.0.0
By Garvin Yu
June 30, 2026
*/
#include <iostream>

using namespace std;

int main() {
    float heights[] = {0.8, 1.2, 1.3, 1.45, 1.7, 1.8};
    int numPeople = 6;
    float heightSum;
    float avgHeight;

    cout << "Heights: ";
    for (int i; i < numPeople; i++) {
        heightSum += heights[i];
        cout << heights[i] << "m\t";
    }
    avgHeight = heightSum / numPeople;

    cout << "\nThe average height of this group is " << avgHeight << " meters." << endl;
}
