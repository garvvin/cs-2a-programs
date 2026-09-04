/*
Poem Writer Program v1.0.0
By Garvin Yu
*/

#include <iostream>
#include <string>

using namespace std;

string makePoem() {
    string fullPoem;
    string prevLine;

    cout << "Type your poem, one line at a time.\nPress enter to create a new line.\nType Q + Enter to exit.\nBegin Typing:\n";
    while (prevLine != "Q" && prevLine != "q") {
        getline(cin, prevLine);
        fullPoem += prevLine + "\n";
    }
    fullPoem = fullPoem.substr(0, fullPoem.length() - 2);
    return fullPoem;
}

int main() {
    string poem = makePoem();
    cout << "\nYour Final Poem:\n" << endl;
    cout << poem << endl;
}

//Output:
/*
    Type your poem, one line at a time.
    Press enter to create a new line.
    Type Q + Enter to exit.
    Begin Typing:
    From time to time
    The clouds give rest
    To the moon-beholders.
    q

    Your Final Poem:

    From time to time
    The clouds give rest
    To the moon-beholders.

*/
