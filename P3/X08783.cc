#include <iostream>
using namespace std;

int main () {
    int b;

    while (cin >> b) {
        int n;
        cin >> n;
        int digits = 0;
        while (n > 0) {
            ++digits;
            n /= b;
        }
        cout << digits << endl;
    }
}
