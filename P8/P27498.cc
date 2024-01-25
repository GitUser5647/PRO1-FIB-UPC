#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matrix;

void swap (int& a, int& b) {
    int aux = a;
    a = b;
    b = aux;
}

void transpose(Matrix& m) {
    int n = m.size();

    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            swap (m[i][j], m[j][i]);
        }
    }
}

void llegir (Matrix& m) {
    int n = m.size();

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> m[i][j];
        }
    }
}

void escriure (Matrix& m) {
    int n = m.size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    Matrix matriu (n, vector <int> (n));
    llegir(matriu);

    transpose(matriu);
    escriure (matriu);

}
