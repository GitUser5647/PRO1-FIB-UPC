#include <iostream>
using namespace std;

bool is_perfect(int n) {
    if (n == 0) return false;

    int sum = 0;

    for (int i = 1; i*i <= n; ++i) {
        if (n%i == 0 and n != i) {
            sum += i;
            if (n/i != n) sum += n/i;
        }
    }

    return (sum == n);
}

int main() {
    int n;
    cin >> n;
    cout << is_perfect(n) << endl;
}
