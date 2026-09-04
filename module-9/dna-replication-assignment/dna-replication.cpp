/*
DNA Replication Program v1.0.0
By Garvin Yu
July 30, 2026
*/
#include <iostream>
#include <string>

enum StrandType {DNAStrandType, RNAStrandType};

using namespace std;

const int STRAND_LENGTH = 10;

bool validateInputStrand(string inputStrand, StrandType inputStrandType) { //checks to see if string has ONLY valid characters (no spaces, etc.) & exactly STRAND_LENGTH characters
    if (inputStrand.length() != STRAND_LENGTH) return false;
    for (char baseChar : inputStrand) {
        if (inputStrandType == DNAStrandType && (baseChar != 'A' && baseChar != 'T' && baseChar != 'C' && baseChar != 'G'))
            return false;
        if (inputStrandType == RNAStrandType && (baseChar != 'A' && baseChar != 'G' && baseChar != 'C' && baseChar != 'U'))
            return false;
    }
    return true;
}

void Replicase(char strand[], StrandType inputStrandType) {
    string inputStrand;
    if (inputStrandType == DNAStrandType)
        cout << "Please enter your DNA strand nucleotide sequence (no spaces, must be A, T, C, or G - capitalized, " << STRAND_LENGTH << " characters):\n";
    if (inputStrandType == RNAStrandType)
        cout << "Please enter your RNA strand nucleotide sequence (no spaces, must be A, G, C, or U - capitalized, " << STRAND_LENGTH << " characters):\n";
    getline(cin, inputStrand);

    while (!validateInputStrand(inputStrand, inputStrandType)) { //loops to validate input strand with custom function
        cout << "Please try again. Enter your sequence with NO SPACES & only the base letters capitalized. " << STRAND_LENGTH << " characters:\n";
        getline(cin, inputStrand);
    }

    for (int currentBaseIndex = 0; currentBaseIndex < STRAND_LENGTH; currentBaseIndex++)
        strand[currentBaseIndex] = inputStrand[currentBaseIndex];
}
void Polymerase(char strand[]) {
    for (int baseIndex = 0; baseIndex < STRAND_LENGTH; baseIndex++)
        switch (strand[baseIndex]) {
            case 'A':
                cout << "A - T\n";
                break;
            case 'T':
                cout << "T - A\n";
                break;
            case 'G':
                cout << "G - C\n";
                break;
            case 'C':
                cout << "C - G\n";
                break;
        }
}
void MessengerRNA(char strand[]){
    for (int baseIndex = 0; baseIndex < STRAND_LENGTH; baseIndex++)
        switch (strand[baseIndex]) {
            case 'A':
                cout << "A - U\n";
                break;
            case 'G':
                cout << "G - C\n";
                break;
            case 'C':
                cout << "C - G\n";
                break;
            case 'U':
                cout << "U - A\n";
                break;
        }
}

int main() {
    char dnaStrand[STRAND_LENGTH];
    char rnaStrand[STRAND_LENGTH];

    Replicase(dnaStrand, DNAStrandType); //uses additional argument for nucleotide base input validation
    cout << "\nDNA strand w/ pairs:\n";
    Polymerase(dnaStrand);
    Replicase(rnaStrand, RNAStrandType);
    cout << "\nRNA strand w/ pairs:\n";
    MessengerRNA(rnaStrand);
}

//Output:
/*
    Please enter your DNA strand nucleotide sequence (no spaces, must be A, T, C, or G - capitalized, 10 characters):
    AGTCTGCTAT

    DNA strand w/ pairs:
    A - T
    G - C
    T - A
    C - G
    T - A
    G - C
    C - G
    T - A
    A - T
    T - A
    Please enter your RNA strand nucleotide sequence (no spaces, must be A, G, C, or U - capitalized, 10 characters):
    AGUAUGAUGU

    RNA strand w/ pairs:
    A - U
    G - C
    U - A
    A - U
    U - A
    G - C
    A - U
    U - A
    G - C
    U - A
*/
