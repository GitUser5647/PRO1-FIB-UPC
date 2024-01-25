#include <iostream>
using namespace std;

double factorial(int n) {
    if (n < 2) return 1;
    else return n*factorial(n - 1);
}

double aproximation(int n) {
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += 1/factorial(i);
    }
    return sum;
}


int main() {
    cout.setf(ios::fixed);
    cout.precision(10);

    int n;
    while (cin >> n) {
        cout << "With " << n << " term(s) we get " << aproximation(n) << "." << endl;
    }
}
