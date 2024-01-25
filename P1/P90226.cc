#include <iostream>
using namespace std;

int main () {
    string a, b;
    cin >> a >> b;

    if (string(a) == string(b))
        cout << (string(a)) << " = " << (string(b)) << endl;

    else if (string(a) > string(b))
        cout << (string(a)) << " > " << (string(b)) << endl;

    else if (string(a) < string(b))
        cout << (string(a)) << " < " << (string(b)) << endl;
}
