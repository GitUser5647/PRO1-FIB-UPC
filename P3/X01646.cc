#include <iostream>
using namespace std;

int suma(int b, int n) {
    int s = 0;

    while (n > 0) {
       s += n%b;
       n /= b;
    }

    return s;
}



int main () {
    int b;
    cin >> b;

    int n;
    while (cin >> n) {
        cout << n << ": " << suma(b, n) << endl;
    }
}
