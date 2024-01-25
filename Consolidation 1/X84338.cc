#include <iostream>
using namespace std;


void escriu_resultat(int m1, int m2) {
    char simbol;
    if (m1 < m2) simbol = '<';
    else if (m1 > m2) simbol = '>';
    else simbol = '=';


    cout << m1 << ' ' << simbol << ' ' << m2 << endl;
}


int main() {
    int n;
    cin >> n;

    int aux = n;
    int digits = 1;
    aux /= 10;


    while (aux > 0) {
        aux /= 10;
        ++digits;
    }

    if (digits%2 == 1) cout << "nothing" << endl;

    else {

        int meitat1, meitat2;
        meitat1 = meitat2 = 0;

        for (int i = 0; i < digits; ++i) {
            if (i < digits/2) meitat2 += n%10;
            else meitat1 += n%10;
            n /= 10;
        }

        escriu_resultat(meitat1, meitat2);

    }

}
