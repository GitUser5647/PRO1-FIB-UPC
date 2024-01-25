#include <iostream>
using namespace std;


struct Fraction {
    int num, den;
};

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a%b);
}

int mcm(int a, int b) {
    return (a*b/gcd(a, b));
}

void normalize(Fraction& f) {
    if (f.num == 0) f.den = 1;
    else {
        int mcd = gcd(f.num, f.den);

        f.num /= mcd;
        f.den /= mcd;
    }
}

Fraction addition(const Fraction& x, const Fraction& y) {
    Fraction add;
    int lcd = mcm(x.den, y.den);

    add.num = x.num*(lcd/x.den) + y.num*(lcd/y.den);
    add.den = lcd;

    normalize(add);

    return add;
}

int main() {
    Fraction result;
    char bar;
    cin >> result.num >> bar >> result.den;

    char ch;

    cin >> ch;
    while (ch != '=') {
        Fraction f;
        cin >> f.num >> ch >> f.den;
        result = addition(result, f);
        cin >> ch;
    }


    cout << result.num << "/" << result.den << endl;
}
