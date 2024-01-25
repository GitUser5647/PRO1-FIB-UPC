#include <iostream>
using namespace std;

int main () {
    int x, y;
    cin >> x >> y;
    int b;

    if (x <= y) {
        b = y;
        while (b >= x) {
            cout << b << endl;
            b = b - 1;
        }
    }

    else {
        b = x;
        while (b >= y) {
            cout << b << endl;
            b = b - 1;
        }
    }
}
