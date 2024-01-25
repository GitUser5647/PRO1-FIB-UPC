#include <iostream>
#include <vector>
using namespace std;

typedef vector < vector<int> > Matrix;

Matrix product(const Matrix& a, const Matrix& b) {
    int p = a.size();
    int q = a[0].size();
    int r = b[0].size();

    Matrix c(p, vector<int> (r, 0));

    for (int i = 0; i < p; ++i) {
        for (int j = 0; j < r; ++j) {
            for (int k = 0; k < q; ++k) c[i][j] += a[i][k]*b[k][j];
        }
    }
    return c;

}

void llegeix(Matrix& m) {
    int rows = m.size();
    int cols = m[0].size();
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> m[i][j];
        }
    }
}

void escriu(Matrix& m) {
    int rows = m.size();
    int cols = m[0].size();
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int arows, acols;
    cin >> arows >> acols;

    Matrix a(arows, vector<int> (acols));
    llegeix(a);


    int brows, bcols;
    cin >> brows >> bcols;

    Matrix b(brows, vector<int> (bcols));
    llegeix(b);

    Matrix result = product(a, b);
    escriu(result);

}
