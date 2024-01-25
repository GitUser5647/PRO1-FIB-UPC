#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<bool> > Chessboard;

void llegeix(Chessboard& board) {
    char c;

    for (int i = 0; i < board.size(); ++i) {
        for (int j = 0; j < board[0].size(); ++j) {
            cin >> c;
            board[i][j] = (c == 'X');
        }
    }
}

void search_dir(const Chessboard& board, int pos_i, int pos_j, int mov_i, int mov_j) {
    int r = board.size();
    int c = board[0].size();

    bool is_threat = false;


    int i = pos_i + mov_i;
    int j = pos_j + mov_j;

    while (not is_threat and i >= 0 and j >= 0 and i < r and j < c) {
        if (board[i][j]) {
            is_threat = true;
            cout << "(" << pos_i + 1 << "," << pos_j + 1 << ")<->(" << i + 1 << "," << j + 1 << ")" << endl;
        }
        i += mov_i;
        j += mov_j;
    }
}

int main() {
    int r, c;
    cin >> r >> c;

    Chessboard board(r, vector<bool>(c));
    llegeix(board);

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            if (board[i][j]) {
                    //  esq - sup
                search_dir(board, i, j, -1, -1);
                    // esq - inf
                search_dir(board, i, j, 1, -1);
                    // dreta - sup
                search_dir(board, i, j, -1, 1);
                    //dreta - inf
                search_dir(board, i, j, 1, 1);
            }
        }
    }
}
