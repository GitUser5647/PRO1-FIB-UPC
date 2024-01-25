#include <iostream>
using namespace std;

int main() {
    char a, b, c, d, e;

    a = 'a'; b = 'a'; c = 'a'; d = 'a';
    cin >> e;
    bool found = false;

    while (not found and e != '.') {
        found = (a == 'h' and b == 'e' and c == 'l' and d == 'l' and e == 'o');
        a = b; b = c, c = d; d = e;
        cin >> e;
    }

    if (found) cout << "hello" << endl;
    else cout << "bye" << endl;


}
