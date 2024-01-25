#include <iostream>
using namespace std;

int main () {
    int number;
    cin >> number;

    if (number == 0) cout << number << endl;

    else {
        while (number > 0) {
            int residuo = number%16;
            if (residuo > 9) {
                cout << (char(int('A') - 10 + residuo));
            }
            else {
                cout << residuo;
            }
            number = number/16;
        }
        cout << endl;
    }
}
