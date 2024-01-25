#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(6);

    double n;
    while (cin >> n) {
        double rad = n*M_PI/180;
        cout << sin(rad) << " " << cos(rad) << endl;
    }
}
