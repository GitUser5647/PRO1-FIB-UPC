#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int j = 1;

    while (j <= n) {
        cout << n << " x " << j << " = " << j*n << endl;
        j = j + 1;
    }
}
