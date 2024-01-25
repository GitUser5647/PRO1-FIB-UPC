#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    int sum = 0;

    for (int j = 1; j <= r; ++j) {
        int coins_r = 0;
        for (int i = 1; i <= c; ++i) {
            char coins;
            cin >> coins;
            // si j es impar (primera, tercera--- columna) y la i es impar, sumar las i)
            if (j%2 != 0 and i%2 != 0)
                coins_r += int(coins) - int('0');
            // si j es par y la i es par, sumar las i
            else if (j%2 == 0 and i%2 == 0)
                coins_r += int(coins) - int('0');
        }
        sum += coins_r;
    }
    cout << sum << endl;
}
