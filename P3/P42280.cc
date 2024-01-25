#include <iostream>
using namespace std;

int main () {
    int r, c;
    cin >> r >> c;
    int sum = 0;

    for (int j = 1; j <= r; ++j) {
        int coins_r = 0;
        for (int i = 1; i <= c; ++i) {
            char coins;
            cin >> coins;
            int number = int(coins)- int('0');
            coins_r += number;
        }
        sum += coins_r;
    }
    cout << sum << endl;
}
