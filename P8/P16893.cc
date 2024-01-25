#include <vector>
#include <iostream>

const int N = 9;
const int SUB_N = 3;

using namespace std;

typedef vector<int> Row;
typedef vector<Row> Matrix;

void read(Matrix& sudoku) {
    int r = sudoku.size();
    int c = sudoku[0].size();

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) cin >> sudoku[i][j];
    }
}

bool check(const Matrix& sudoku, bool row) {
    bool correcte = true;

    int p_ext = 0;

    while (correcte and p_ext < N) {
        vector <int> numbers(N, 0);
        int p_int = 0;

        while (correcte and p_int < N) {
            int nums;
            if (row) nums = sudoku[p_ext][p_int];
            else nums = sudoku[p_int][p_ext];

            if (numbers[nums - 1] == 0) ++numbers[nums - 1];
            else correcte = false;

            ++p_int;
        }
        ++p_ext;
    }
    return correcte;
}

bool check_square(const Matrix& sudoku) {
    bool error = false;

    for (int i = 0; not error and i < 3; ++i) {
        for (int j = 0; not error and j < 3; ++j) {
            vector<int> subQuad(9, 0);
            for (int k = 0; not error and k < 3; ++k) {
                for (int l = 0; not error and l < 3; ++l) {
                    int num = sudoku[3 * i + k][3 * j + l];

                    if (subQuad[num - 1] == 1)
                        error = true;

                    ++subQuad[num - 1];
                }
            }
        }
    }
    return (not error);
}


int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        Matrix sudoku(N, Row(N));

        read(sudoku);

        if (check(sudoku, true) and check(sudoku, false) and check_square(sudoku)) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}
