#include <iostream>
using namespace std;

int main () {
    char letter;
    cin >> letter;

    if ('A' <= letter and letter <= 'Z') {
        cout << "uppercase" << endl;
    }
    else {
        cout << "lowercase" << endl;
        letter = (letter - 'a' + 'A');
    }

    if (letter == 'A' or letter == 'E' or letter == 'I' or letter == 'O' or letter == 'U') {
        cout << "vowel" << endl;
    }
    else
        cout << "consonant" << endl;
}
