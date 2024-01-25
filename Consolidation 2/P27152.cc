#include <iostream>
#include <string>
using namespace std;

//pre: 'letter' és una lletra minúscula
//post: torna el seu valor segons la seva freqüència
int valor(char letter) {
    if (letter == 'a' or letter == 'e') return 1;
    else if (letter == 'o' or letter == 's') return 2;
    else if (letter == 'd' or letter == 'i' or letter == 'n' or letter == 'r') return 3;
    else if (letter == 'c' or letter == 'l' or letter == 't' or letter == 'u') return 4;
    else if (letter == 'm' or letter == 'p') return 5;
    else if (letter == 'k' or letter == 'w') return 7;
    else return 6;
}

int main() {
    char c;

    int total = 0;
    while (cin >> c) {
        if ('a' <= c and c <= 'z') {
            total += valor(c);
        }
    }
    cout << total << endl;
}
