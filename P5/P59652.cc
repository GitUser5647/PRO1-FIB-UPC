#include <iostream>
using namespace std;

int mcd(int a, int b) {
    while (b > 0) {
        int aux = a%b;
        a = b;
        b = aux;
    }
    return a;
}

void read_rational(int& num, int& den) {
    char c;
    cin >> num >> c >> den;
    int a = mcd(num, den);
    num /= a;
    den /= a;

}


int main() {
    int num, den;
    read_rational(num, den);
    cout << "num = " << num << endl;
    cout << "den = " << den << endl;
}
