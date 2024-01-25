#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;


    for (int linea = 1; linea <= n; ++linea) {
        for (int j = 1; j <= n - linea; ++j) cout << " ";
        for (int j = 1; j <= linea*2 - 1; ++j) cout << "*";
        cout << endl;
    }
    for (int linea = 1; linea < n; ++linea) {
        for (int i = 1; i <= linea; ++i)
            cout << " ";
        for (int i = 1; i <= (2*n - 1) - 2*linea; ++i)
            cout << "*";
        cout << endl;
    }
}
