#include <iostream>
using namespace std;

int main () {
    int n;

    while (cin >> n) {
        int resta = n - 1;
        int x = n;
        int nblanks = n - 1;

        for (int linea_hasta_n = 0; linea_hasta_n < resta; ++linea_hasta_n) {



            for (int j = 1; j <= nblanks; ++j)
                cout << " ";

            for (int j = 1; j <= x; ++j) {
                cout << "X";
            }

            cout << endl;

            --nblanks; x += 2;
        }

        for (int lineas_base = 1; lineas_base <= n; ++lineas_base) {
            int i = 0;
            while (i < (3*n - 2)) {
                cout << "X";
                i += 1;
            }
            cout << endl;
        }

        int nblanks2 = n + 1;
        int y = 3*n - 2;

        for (int ultimas_lineas = 0; ultimas_lineas < n -1; ++ ultimas_lineas) {
            for (int t = 1; t <= nblanks2 - n; ++t)
                cout << " ";
            for (int t = 1; t <= y - 2; ++t)
                cout << "X";
            cout << endl;
            ++nblanks2; y -=2;
        }
        cout << endl;
    }
}
