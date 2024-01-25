#include <iostream>
#include <cmath>
using namespace std;

int main () {
    cout.setf(ios::fixed);
    cout.precision(2);

    double suma = 0;
    double number;
    int j = 0;

    while (cin >> number) {
        suma = suma + number;
        ++j;
    }

    cout << (suma/j) << endl;
}
