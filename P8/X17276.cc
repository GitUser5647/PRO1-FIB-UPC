#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Row;
typedef vector<Row> Matrix;

void llegeix(Matrix& m) {
    for (int i = 0; i < m.size(); ++i) {
        for (int j = 0; j < m[0].size(); ++j) cin >> m[i][j];
    }
}

bool is_inc(const Matrix& m, int pos_i, int pos_j, int mov_i, int mov_j) {
    int r = m.size();
    int c = m[0].size();

    int i, j;

    i = pos_i + mov_i;
    j = pos_j + mov_j;
    int pre = m[pos_i][pos_j];

    while (i >= 0 and j >= 0 and i < r and j < c) {
        if (m[i][j] <= pre) return false;
        pre = m[i][j];
        i += mov_i;
        j += mov_j;
    }
    return true;
}


bool is_increasing(const Matrix& m, int pos_i, int pos_j) {
    int p_i = pos_i;
    int p_j = pos_j;

        //diagonal esquerra superior i esquerra inferior
    if (not is_inc(m, p_i, p_j, -1, -1) or not is_inc(m, p_i, p_j, 1, -1)) return false;
        // diagonal dreta superior i dreta inferior
    else if (not is_inc(m, p_i, p_j, -1, 1) or not is_inc(m, p_i, p_j, 1, 1)) return false;

    return true;
}

int main() {
    int n, m;
    while (cin >> n >> m) {
        Matrix mat(n, Row(m));
        llegeix(mat);

        int row, column;
        cin >> row >> column;

        if (is_increasing(mat, row, column)) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}
