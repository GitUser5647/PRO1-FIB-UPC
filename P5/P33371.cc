#include <iostream>
using namespace std;

char encoded(char c, int k) {
    char other;

    if ('a' <= c and c <='z') {
        int moved = k%26;
        if (int (c) + moved > int('z')) {
            other = 'a' + moved - (int('z') - int(c)) - 1;
        }
    else other = c + moved;

    //convert to uppercase;
    other = other - 'a' + 'A';
    }

    else if (c == '_') other = ' ';
    else other = c;

    return other;
}

int main() {
    int k;
    while (cin >> k) {
        char c;
        cin >> c;
        while (c != '.') {
            cout << encoded(c, k);
            cin >> c;
        }
        cout << endl;
    }
}
