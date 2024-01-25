#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int aux = n-1;

    for (int linea = 0; linea < n; ++linea) {
        for (int j = 1; j <= aux; ++j)
            cout << "+";
        cout << "/";
        for (int j = 1; j <= n - aux - 1; ++ j)
            cout << "*";
        cout << endl;
        --aux;
    }
}
