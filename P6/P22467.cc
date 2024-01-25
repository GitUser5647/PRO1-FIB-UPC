#include <iostream>
using namespace std;


int s(int n) {
    if (n < 10) return n;
    else return s(n/10) + n%10;
}

bool is_prime(int n) {
    bool prime = true;
    int i = 2;
    if (n <= 1) prime = false;
    while (i*i <= n and prime) {
        if (n%i == 0) prime = false;
        ++i;
    }
    return prime;
}

bool is_perfect_prime(int n) {
    if (n < 10) return is_prime(n);
    else return (is_prime(n) and is_perfect_prime(s(n)));
}

int main() {
    int n;
    cin >> n;
    cout << is_perfect_prime(n) << endl;
}
