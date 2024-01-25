#include <iostream>
using namespace std;

int main () {
    cout.setf(ios::fixed);
    cout.precision(4);

    int n;
    cin >> n;
    double suma = 0;

    for (double j = 1; j <= n; ++j)
        suma = suma + (1/j);

    cout << suma << endl;
}
