#include <iostream>
#include <vector>
#include <string>
using namespace std;

typedef vector<int> Fila;
typedef vector<char> Fila_char;
typedef vector<Fila> Matrix;
typedef vector<Fila_char> Matrix_char;

void llegeix_matrius(Matrix_char& mat_c, Matrix& mat) {
    int r = mat.size();
    int c = mat[0].size();

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) cin >> mat_c[i][j];
    }

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) cin >> mat[i][j];
    }
}

bool is_dir(string word, const Matrix_char& mat_c, int pos_i, int pos_j, bool horizontal) {
    int r = mat_c.size();
    int c = mat_c[0].size();
    int s = word.size();

    if (horizontal) {
        bool hor = true;
        int j = 0;

        if (pos_j + s > c) hor = false;

        while (hor and j < s) {
            if (word[j] != mat_c[pos_i][pos_j + j]) hor = false;
            ++j;
        }

        return hor;
    }

    else {
        bool ver = true;
        int i = 0;
        if (pos_i + s > r) ver = false;

        while (ver and i < s) {
            if (word[i] != mat_c[pos_i + i][pos_j]) ver = false;
            ++i;
        }
        return ver;
    }
}

int points_dir(const Matrix& mat, int s, int pos_i, int pos_j, bool horizontal) {
    int punts = 0;

    if (horizontal) {
        int j = 0;
        while (j < s) {
            punts += mat[pos_i][pos_j + j];
            ++j;
        }
    }

    else {
        int i = 0;
        while (i < s) {
            punts += mat[pos_i + i][pos_j];
            ++i;
        }
    }
    return punts;
}



int main() {
    int r, c;
    while (cin >> r >> c) {
        Matrix_char mat_c(r, Fila_char(c));
        Matrix mat(r, Fila(c));

        llegeix_matrius(mat_c, mat);

        int t;
        cin >> t;

        for (int k = 0; k < t; ++k) {
            string word;
            cin >> word;

            int points;
            int max_points = -1;
            int s = word.size();

            for (int i = 0; i < r; ++i) {
                for (int j = 0; j < c; ++j) {
                    //comencem buscant la primera lletra
                    if (word[0] == mat_c[i][j]) {

                        if (is_dir(word, mat_c, i, j, true)) {
                            points = points_dir(mat, s, i, j, true);
                            if (points > max_points) max_points = points;
                        }

                        if (is_dir(word, mat_c, i, j, false)) {
                            points = points_dir(mat, s, i, j, false);
                            if (points > max_points) max_points = points;
                        }
                    }
                }
            }

            if (max_points > -1) cout << max_points << endl;
            else cout << "no" << endl;
        }
    }
}
