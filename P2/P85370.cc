#include <iostream>
#include <cmath>
using namespace std;

int main () {
    cout.setf(ios::fixed);
    cout.precision(4);

    double c, i;
    int t;
    string type;

    cin >> c >> i >> t >> type;

    if (type == "simple")
        cout << (c+(c*i/100*t)) << endl;

    else
        cout << (c*pow((1+i/100),t)) << endl;
}
