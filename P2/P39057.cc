#include <iostream>
#include <cmath>
using namespace std;

int main () {
    cout.setf(ios::fixed);
    cout.precision(6);

    int n;
    cin >> n;

    for (int j = 1; j <= n; ++j) {
        string description;
        cin >> description;

        if (description == "rectangle") {
            double w, l;
            cin >> w >> l;
            cout << (w * l) << endl;
        }

        else {
            double radius;
            cin >> radius;
            cout << M_PI*radius*radius << endl;

        }
    }
}
