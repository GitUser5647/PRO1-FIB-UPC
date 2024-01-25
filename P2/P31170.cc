#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int j = 1;

    while (j <= 10) {
        cout << n << "*" << j << " = " << j*n << endl;
        j = j + 1;
    }
}
