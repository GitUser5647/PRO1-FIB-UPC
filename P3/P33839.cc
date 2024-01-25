#include <iostream>
using namespace std;

int main () {
    int number;
    while (cin >> number) {
        int suma = 0;
        int n = number;
        while (n > 0) {
            suma += n%10;
            n /= 10;
        }
    cout << "The sum of the digits of " << number << " is " << suma << "." << endl;
    }
}
