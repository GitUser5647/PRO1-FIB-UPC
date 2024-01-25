#include <iostream>
using namespace std;

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

int main() {
    int number;
    cin >> number;
    for (int i = 1; i <= number; ++i) {
        int n;
        cin >> n;
        if (is_prime(n)) cout << n << " is prime" << endl;
        else cout << n << " is not prime" << endl;
    }

}
