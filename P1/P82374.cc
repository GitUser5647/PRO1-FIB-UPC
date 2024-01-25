#include <iostream>
using namespace std;

int main () {
    int x, a, b, c, d;
    cin >> x >> a >> b >> c >> d;

    if ((x >= a and x <= b) or (x >= c and x <= d))
        cout << "yes" << endl;

    else if ((x < a) or (x > d))
        cout << "no" << endl;

    else if ((x > b) and (x < c))
        cout << "no" << endl;

    else
        cout << "yes" << endl;
}
