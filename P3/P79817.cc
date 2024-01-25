#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int a;

    while (cin >> a) {
        int b;
        cin >> b;

        int power;

        if (a == b and a == 0) power = 1;

        else power = (pow(a,b));

        cout << power << endl;
    }
}
