#include <iostream>
using namespace std;

//pre: n > 0;
//post: guarda en k els passos, i en far el màxim dels nombres recorreguts

void converge(int n, int& k, int& far) {
    k = 0;
    far = n;


    if (n != 1) {
        ++k;
        int subk;
        int subfar;

        if (n%2 == 0) converge(n/2, subk, subfar);
        else converge(n*3 + 1, subk, subfar);

        k += subk;
        if (subfar > far) far = subfar;
    }
}

int main() {
    int m, p;
    cin >> m >> p;
    int greatest = 0;

    for (int i = 1; i <= m; ++i) {
        int passos;
        int maxim;
        converge(i, passos, maxim);

        if (passos >= p) cout << i << endl;
        if (maxim > greatest) greatest = maxim;
    }

    cout << "The greatest reached number is " << greatest << "." << endl;
}
