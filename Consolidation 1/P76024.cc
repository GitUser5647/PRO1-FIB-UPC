#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(4);

    int a;
    while (cin >> a) {
        int b, k;
        cin >> b >> k;

        double i = a;
        double suma = 0;

         while (i <= b) {
            suma += (1/i);
            i += k;
         }
         cout << suma << endl;

    }
}
