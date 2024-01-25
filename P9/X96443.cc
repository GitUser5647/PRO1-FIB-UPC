#include <iostream>
#include <vector>
using namespace std;

typedef vector<char> Row;
typedef vector<Row> Matrix;

struct Coord {
    int x, y;
};



void llegeix(Matrix& m) {
    for (int i = 0; i < m.size(); ++i) {
        for (int j = 0; j < m[0].size(); ++j) cin >> m[i][j];
    }
}

Coord nextD(const Coord& p, int n) {
    Coord p1;
    if (p.x - 1 < 0 and p.y + 1 > n - 1) {
        p1.x = n - 1;
        p1.y = p.x + 1;
    }

    else if (p.x == n - 1 and p.y == n - 1) {
        p1.x = 0;
        p1.y = 0;
    }

    else if (p.x - 1 < 0) {
        p1.y = 0;
        p1.x = p.y + 1;
    }

    else if (p.y + 1 > n - 1) {
        p1.y = p.x + 1;
        p1.x = n - 1;
    }

    else {
        p1.x = p.x - 1;
        p1.y = p.y + 1;
    }
    return p1;
}


int main() {
    int n, d, l;
    Coord p;

    while (cin >> n >> d >> l >> p.x >> p.y) {
        Matrix mat(n, Row(n));
        llegeix(mat);

        vector<char> res(l);

        res[0] = mat[p.x][p.y];

        for (int i = 1; i < l; ++i) {
            for (int j = 0; j < d + 1; ++j) {
                p = nextD(p, n);
            }
            res[i] = mat[p.x][p.y];
        }

        for (int i = 0; i < res.size() - 1; ++i) {
            if (res[i] == 'X' and res[i + 1] == 'X') {
                cout << ' ';
                ++i;
            }
            else cout << res[i];
        }
        cout << res[res.size() - 1] << endl;
    }

}
