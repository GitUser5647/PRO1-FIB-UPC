#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int number = n;
    int ndigits = 0;

    if (n == 0) ndigits = 1;

    while (n > 0) {
        ++ndigits;
        n /= 10;
    }
    cout << "The number of digits of " << number << " is " << ndigits << "." << endl;
}
