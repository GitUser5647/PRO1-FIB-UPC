#include <iostream>
using namespace std;

int main () {
    char lletra;
    cin >> lletra;

    if ('A' <= lletra and lletra <= 'Z')
        cout << char(int(lletra) - int('A') + int('a')) << endl;

    if ('a' <= lletra and lletra <= 'z')
        cout << char(int(lletra) - int('a') + int('A')) << endl;
}
