#include <iostream>
using namespace std;

bool is_prime(int n) {
    bool prime = (n != 1 and n!= 0);
    int i = 2;

    while (prime and i*i <= n) {
        prime = (n%i != 0);
        ++i;
    }
    return prime;
}

void next(int a, int&c) {
    int aux = a + 1;
    while (not is_prime(aux)) {
        ++aux;
    }
    c = aux;
}


int main() {
    int a;
    int nprime;
    while (cin >> a) {
        next(a, nprime);
        if (is_prime(a)) cout << nprime << endl;
    }
}
