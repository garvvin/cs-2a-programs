/*
Turing Test Program v1.0.0
By Garvin Yu
August 2, 2026
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int turingTestRuns = 2;

void imitationGame(string& outputFileName) {
    ifstream gameFileInput;
    ofstream gameFileOutput;

    cout << string("Attempting to open \"turing.txt\" & \"") + outputFileName + ".txt\"\n" << endl;
    gameFileInput.open("turing.txt");
    gameFileOutput.open(outputFileName + ".txt");

    if (gameFileInput.is_open() && gameFileOutput.is_open()) {
        string currentQuestion;
        string questionNum;
        string currentAnswer;
        while (getline(gameFileInput, currentQuestion)) {
            questionNum = currentQuestion.substr(0, 1); //extract the number part out of question line
            currentQuestion = currentQuestion.substr(3); //remove number list formatting from question

            cout << currentQuestion + "\n";
            cout << "Please answer question #" << questionNum << ":\n";
            getline(cin, currentAnswer);
            gameFileOutput << questionNum + ". " + currentAnswer + '\n';
        }
        gameFileInput.close();
        gameFileOutput.close();
    } else {
        cout << "Unable to open the specified file(s) \"turing.txt\" and/or \"" << outputFileName << ".txt\"" << endl;
    }
}

int main() {
    string fileName;
    char confirmFileName = 'n';

    cout << "We will now begin the turing test." << endl;

    for (int i = 0; i < turingTestRuns; i++) {
        if (i > 0)
            cout << '\n';
        cout << "To begin, please enter an output filename.\n";
        while (confirmFileName != 'y') {
            cout << "Name: ";
            getline(cin, fileName);
            if (fileName.length() < 3) {
                cout << "File name must be 3+ characters.\n";
                continue;
            } else if (fileName == "turing") {
                cout << "File name cannot be \"turing.txt\".";
                continue;
            } else if (fileName == "test-evaluation") {
                cout << "File name cannot be \"test-evaluation.txt\".";
                continue;
            }
            cout << "Confirm file name \"" << fileName << ".txt\"? (y/N, x to exit): ";
            cin >> confirmFileName;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            if (confirmFileName == 'x')
                exit(0);
        }
        confirmFileName = 'n';
        imitationGame(fileName);
    }
    cout << "\nYou've completed the turing test!" << endl;
}

// turing-test-assignment/turing.txt
/*
    1. How did you do yesterday?
    2. What was the most important lesson you've learned in life?
    3. What's your favorite smell?
*/

// turing-test-assignment/output-1.txt
/*
    1. I did pretty good yesterday. I went to San Francisco and had a matcha latte from a place near Chinatown.
    2. The most important lesson I've learned in life is to always be true to myself and do things with integrity.
    3. My favorite smell is the White Tea & Sage hand sanitizer I got from Bath & Body Works.
*/

// turing-test-assignment/output-2.txt
/*
    1. I don't have memory of past conversations (memory isn't enabled for this chat), so I don't actually know what happened "yesterday" — each conversation starts fresh for me unless you tell me about it.
    2. People usually already know more than they think they do, and the most useful thing I can do is help them think clearly rather than hand them a verdict. The times a conversation goes well are usually ones where someone worked through something themselves with a bit of help, not ones where I just delivered an answer.
    3. If I speculate playfully: petrichor (that smell right after rain hits dry earth) comes up a lot in writing as something people find almost universally appealing, and there's something conceptually nice about it — rain and soil interacting to release something that wasn't there a moment before. But that's me finding an idea aesthetically interesting, not me actually smelling anything.
*/
