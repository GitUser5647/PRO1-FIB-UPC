#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<char> > Matrix;

void llegeix(Matrix& m) {
    int n = m.size();
    int c = m[0].size();

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> m[i][j];
        }
    }
}

void print(const Matrix& m) {
    int n = m.size();
    int c = m[0].size();

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < c; ++j) {
            cout << m[i][j];
        }
        cout << endl;
    }
}

bool hi_ha_dir(const Matrix& m, int pos_i, int pos_j, int mi, int mj) {
    int n = m.size();
    int c = m[0].size();

    int i = pos_i + mi;
    int j = pos_j + mj;

    if (i >= 0 and j >= 0 and i < n and j < c) {
        if (m[i][j] == 'B') return true;
    }
    return false;
}

int n_bac(const Matrix& m, int pos_i, int pos_j) {
    int num = 0;
    if (pos_i > 0) {
        if (hi_ha_dir(m, pos_i, pos_j, -1, -1)) ++num;
        if (hi_ha_dir(m, pos_i, pos_j, -1, 0)) ++num;
        if (hi_ha_dir(m, pos_i, pos_j, -1, 1)) ++num;
    }

    if (hi_ha_dir(m, pos_i, pos_j, 0, -1)) ++num;
    if (hi_ha_dir(m, pos_i, pos_j, 0, 1)) ++num;

    int n = m.size();
    if (pos_i < n - 1) {
        if (hi_ha_dir(m, pos_i, pos_j, 1, -1)) ++num;
        if (hi_ha_dir(m, pos_i, pos_j, 1, 0)) ++num;
        if (hi_ha_dir(m, pos_i, pos_j, 1, 1)) ++num;
    }

    return num;
}

int main() {
    int n, m;

    cin >> n >> m;
    bool first = true;

    while (n != 0 and m != 0) {
        Matrix mat(n, vector<char>(m));
        llegeix(mat);

        Matrix copia(n, vector<char>(m, '.'));

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                int nei = n_bac(mat, i, j);

                if (mat[i][j] == 'B' and (nei == 2 or nei == 3)) copia[i][j] = 'B';
                else if (mat[i][j] == '.' and nei == 3) copia[i][j] = 'B';
            }
        }

        if (not first) cout << endl;
        else first = false;

        print(copia);
        cin >> n >> m;
    }
}
