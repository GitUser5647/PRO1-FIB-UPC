#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matrix;

Matrix product(const Matrix& a, const Matrix& b) {
    int n = a.size();

    Matrix c(n, vector <int> (n, 0));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) c[i][j] += a[i][k]*b[k][j];
        }
    }
    return c;

}

void llegeix(Matrix& m) {
    int n = m.size();

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> m[i][j];
        }
    }
}

void escriu(Matrix& m) {
    int n = m.size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}

    //pre: n >= 0;
    //post: write Matrix product of a*b;

int main() {
    int n;
    cin >> n;

    Matrix a(n, vector <int> (n));
    llegeix(a);

    Matrix b(n, vector <int> (n));
    llegeix(b);

    Matrix result = product(a, b);
    escriu(result);
}
