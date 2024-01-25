#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Fila;
typedef vector<Fila> Matriz;

void llegir(const Matriz& m) {
    string s;
    int nrows = m.size();
    int ncols = m[0].size();

    while (cin >> s) {
        cout << s << " ";
        if (s == "row") {
            int n;
            cin >> n;
            cout << n << ":";
            for (int j = 0; j < ncols; ++j) {
                cout << " " << m[n - 1][j];
            }
            cout << endl;
        }
        else if (s == "column") {
            int n;
            cin >> n;
            cout << n << ":";
            for (int i = 0; i < nrows; ++i) {
                cout << " " << m[i][n - 1];
            }
            cout << endl;
        }
        else {
            int a, b;
            cin >> a >> b;
            cout << a << " " << b << ": " << m[a - 1][b - 1] << endl;
        }
    }
}

int main() {
    int r, c;
    cin >> r >> c;
    Matriz matriu(r, Fila(c));

    for (int i = 0; i < r; ++i) {
        //tractar fila i-èsima
        for (int j = 0; j < c; ++j) cin >> matriu[i][j];
    }

    llegir(matriu);


}
