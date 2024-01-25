#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(4);

    double x;
    cin >> x;
    double i = 1;

    double suma = 0;

    double polin;
    while (cin >> polin) {
        suma += polin*i;
        i *= x;
    }
    cout << suma << endl;
}
