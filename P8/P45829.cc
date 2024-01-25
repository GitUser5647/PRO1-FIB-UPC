#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Row;
typedef vector<Row> Matrix;

void llegeix(Matrix& m) {
    int r = m.size();
    int c = m[0].size();

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) cin >> m[i][j];
    }
}

int main() {
    int m,  n;

    while (cin >> m >> n) {
        Matrix field(m, Row(n));

        int counter = 0;
        llegeix(field);

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                bool nou = true;

                if (field[i][j] == 0) nou = false;

                else {
                    if (i != 0 and field[i][j] == field[i - 1][j]) nou = false;
                    if (j != 0 and field[i][j] == field[i][j - 1]) nou = false;

                    if (nou) ++counter;
                }
            }
        }
        cout << counter << endl;
    }
}
