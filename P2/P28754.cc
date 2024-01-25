#include <iostream>
using namespace std;

int main () {
    int number;
    cin >> number;

    if (number == 0) cout << number << endl;

    else {
        while (number >= 1) {
            cout << number%2;
            number = number/2;
        }
    if (number == 1) cout << number << endl;
    else
        cout << endl;
    }
}
