#include <iostream>
using namespace std;

int main () {
    int number;
    cin >> number;

    for (int base = 2; base <= 16; ++base) {
        int num = number;
        int ndigits = 0;

        while (num != 0) {
            ++ndigits;
            num /= base;
        }

        cout << "Base " << base << ": " << ndigits << " cifras." << endl;
    }
}
