#include <iostream>
#include <vector>
using namespace std;

typedef vector<char> Row;
typedef vector<Row> Rectangle;

void minimal_dimensions(char c, const Rectangle& r, int& rows, int& cols) {
    int ro = r.size();
    int co = r[0].size();

    int i, j;


        //  mirem la primera aparicio del caracter c des de dalt
    int pos_dalt;
    bool found = false;

    i = 0;
    while (not found and i < ro) {
        j = 0;
        while (not found and j < co) {
            if (r[i][j] == c) {
                found = true;
                pos_dalt = i;
            }
            ++j;
        }
        ++i;
    }

        //  mirem la primera aparicio de c des de baix
    int pos_baix;
    found = false;

    i = ro - 1;
    while (not found and i >= 0) {
        j = 0;
        while (not found and j < co) {
            if (r[i][j] == c) {
                found = true;
                pos_baix = i;
            }
            ++j;
        }
        --i;
    }


        //  mirem la primera aparicio de c des de l'esquerra
    int pos_esq;
    found = false;

    j = 0;
    while (not found and j < co) {
        i = 0;
        while (not found and i < ro) {
            if (r[i][j] == c) {
                found = true;
                pos_esq = j;
            }
            ++i;
        }
        ++j;
    }


        //  mirem la primera aparicio de c des de la dreta
    int pos_dreta;
    found = false;

    j = co - 1;
    while (not found and j >= 0) {
        i = 0;
        while (not found and i < ro) {
            if (r[i][j] == c) {
                found = true;
                pos_dreta = j;
            }
            ++i;
        }
        --j;
    }

    rows = pos_baix - pos_dalt + 1;
    cols = pos_dreta - pos_esq + 1;
}


int main() {
    int ro, co;
    cin >> ro >> co;

    Rectangle r(ro, Row(co));

    for (int i = 0; i < ro; ++i) {
        for (int j = 0; j < co; ++j) cin >> r[i][j];
    }

    char c;
    cin >> c;

    int rows, cols;

    minimal_dimensions(c, r, rows, cols);

    cout << "rows = " << rows << endl;
    cout << "columns = " << cols << endl;
}
