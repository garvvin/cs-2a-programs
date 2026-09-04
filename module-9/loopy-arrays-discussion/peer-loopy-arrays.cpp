/*
Aster's Exploration Log Program
By Melyssa Kimura
Modified by Garvin Yu
July 30, 2026
*/
#include <iostream>
using namespace std;

int main() {
   const int numChecks = 7;
   int areasExplored[numChecks] = {3, 8, 2, 13, 4, 9, 5};

   int totalAreas = 0;
   int explorationBursts = 0;
   int checkNum; //replacement for "check" variable, as index isn't tracked in foreach loop
                 //uses manual accumulator
   cout << "Aster's Exploration Log\n";

   for (int& areaExplored : areasExplored) { //foreach loop replacement
       cout << "Check " << checkNum + 1 << ": " << areaExplored << " areas - ";
       totalAreas = totalAreas + areaExplored;

       if (areaExplored >= 8) {
           cout << "exploration burst";
           explorationBursts++;
       }
       else if (areaExplored >= 4) {
           cout << "steady exploring";
       }
       else {
           cout << "resting";
       }

       cout << endl;
       checkNum++;
   }

   cout << "Total areas explored: " << totalAreas << endl;
   cout << "Exploration bursts: " << explorationBursts << endl;

   return 0;
}
