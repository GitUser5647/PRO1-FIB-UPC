#include <iostream>
using namespace std;

//pre: totes les dades de l'entrada són vàlides, i 1800 <= any <= 9999
//post: retorna n < 0 si data1 anterior a data2; n = 0 si data1 igual a data2; n > 0 si data1 posterior a data2

int compara(int d1, int m1, int a1, int d2, int m2, int a2) {
    int n;
    n = a1 - a2;
    if (n != 0) return n;
    else {
        n = m1 - m2;
        if (n != 0) return n;
        else {
            n = d1 - d2;
            return n;
        }
    }
}

int main() {
    int d1, m1, a1, d2, m2, a2;
    char c;

    while (cin >> d1 >> c >> m1 >> c >> a1 and cin >> d2 >> c >> m2 >> c >> a2) {
        if (compara(d1, m1, a1, d2, m2, a2) > 0) cout << "posterior" << endl;
        else if (compara(d1, m1, a1, d2, m2, a2) < 0) cout << "anterior" << endl;
        else cout << "iguals" << endl;
    }
}
