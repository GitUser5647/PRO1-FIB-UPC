#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int suma = 0;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            char coin;
            cin >> coin;
            if (i == j or j + i == n + 1) suma += int(coin) - '0';
        }
    }

    cout << suma << endl;
}
