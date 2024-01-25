#include <iostream>
using namespace std;

int main () {
    cout.setf(ios::fixed);
    cout.precision(10);

    double n;
        while (cin >> n) {
            double m;
            cin >> m;

            double harmonics = 0;

            for (int j = (m + 1); j <= n; ++j)
                harmonics += 1.0/j;

            cout << harmonics << endl;
        }
}
