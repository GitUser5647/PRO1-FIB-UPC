#include <iostream>
#include <cmath>
using namespace std;

double distance(double x1, double y1, double x2, double y2) {
    double x = pow(x1 - x2, 2);
    double y = pow(y1 - y2, 2);
    return sqrt(x + y);
}

int main() {
    cout.setf(ios::fixed);
    cout.precision(4);

    string route;
    while (cin >> route) {
        double total = 0;

        double origenx, origeny;
        cin >> origenx >> origeny;

        double x1 = origenx;
        double y1 = origeny;

        double x2, y2;

        bool end = false;
        while (not end and cin >> x2 >> y2) {
            total += distance(x1, y1, x2, y2);
            if (x2 == origenx and y2 == origeny) end = true;
            x1 = x2;
            y1 = y2;
        }
        cout << "Route " << route << ": " << total << endl;

    }
}
