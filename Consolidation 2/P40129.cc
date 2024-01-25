#include <iostream>
#include <string>
using namespace std;

//pre: the input is a sequence of 10 characters. If it is a number n, 0 <= n and n <= 9, except the last character, which can be 'X' (= 10); at least one character is '?'.
//post:

void read_code(string ISBN, int& s, int& pos) {
    s = 0;

    for (int i = 0; i < 10; ++i) {
        if ('0' <= ISBN[i] and ISBN[i] <= '9') {
            s += int(ISBN[i] - '0')*(10 - i);
        }
        else if (ISBN[i] == 'X') s += 10;
        else pos = i;
    }
}

int main() {
    string ISBN;
    while (cin >> ISBN) {
        int suma, posició;
        read_code(ISBN, suma, posició);

        int solució;

        for (int i = 0; i < 11; ++i) {
            if (((10 - posició)*i + suma)%11 == 0) solució = i;
        }

        if (solució < 10) cout << solució << endl;
        else cout << "X" << endl;
    }
}
