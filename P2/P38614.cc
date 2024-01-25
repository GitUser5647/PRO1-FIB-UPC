#include <iostream>
using namespace std;

int main () {
    int number;
    cin >> number;
    int n = number;
    int sumadigits = 0;

    while (n > 0) {
        int residuo = n%10;
        sumadigits += residuo;
        n /= 100;
    }

    if (sumadigits%2 != 0)
        cout << number << " IS NOT COOL" << endl;

    else
        cout << number << " IS COOL" << endl;
}
