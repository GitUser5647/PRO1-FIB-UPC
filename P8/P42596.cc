#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int> > Matrix;

//pre: mat no buida
//post minimum es l'element minim de mat, i maximum l'element maxim

void min_max(const Matrix& mat, int& minimum, int & maximum) {
    maximum = mat[0][0];
    minimum = mat[0][0];

    int n = mat.size();
    int m = mat[0].size(); //correcte perquè mat no buida

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
                if (mat[i][j] > maximum) maximum = mat[i][j];
                if (mat[i][j] < minimum) minimum = mat[i][j];
        }
    }
}


int main() {
    int n, m;
    int posicio = 0;
    int maxdif = -1;
    int maxposicio = 1;

    while (cin >> n >> m) {
        ++posicio;

        Matrix matriu (n, vector<int>(m));

        //llegir matriu
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) cin >> matriu[i][j];
        }

        int min, max;
        min_max(matriu, min, max);
        int dif = max - min;

        if (dif > maxdif) {
            maxdif = dif;
            maxposicio = posicio;
        }
    }

    cout << "la diferencia maxima es " << maxdif << endl;
    cout << "la primera matriu amb aquesta diferencia es la " << maxposicio << endl;
}
