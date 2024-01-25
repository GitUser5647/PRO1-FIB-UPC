#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;

    for (int linea = 1; linea <= n; ++linea) {
        for (int j = 1; j <= linea; ++j)
            cout << "*";
        cout << endl;
    }
}
