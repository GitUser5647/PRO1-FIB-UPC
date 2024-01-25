#include <iostream>
using namespace std;



void swap(int& n1, int& n2) {
    int aux = n1;
    n1 = n2;
    n2 = aux;
}


void assignar(int& A, int& B, int& C) {
    if (B < A and B < C) swap(A, B);
    else if (C < A and C < B) swap(A, C);


    if (C < B) swap(B, C);
}




int main() {
    int A, B, C;



    cin >> A >> B >> C;

    assignar(A, B, C);

    bool primer = true;
    char aux;
    while (cin >> aux) {
        if (primer) primer = false;
        else cout << ' ';

        if (aux == 'A') cout << A;
        else if (aux == 'B') cout << B;
        else cout << C;
    }
    cout << endl;
}
