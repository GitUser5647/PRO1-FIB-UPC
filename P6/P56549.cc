#include <iostream>
using namespace std;

void convert(int b, int n) {

    if (n/b != 0) convert(b,n/b);

    if (n%b < 10) cout << n%b;
    else cout << char(n%b - 10 + 'A');
}


int main() {
    int n;
    while (cin >> n) {
        cout << n << " = ";
        convert(2,n);
        cout << ", ";
        convert(8,n);
        cout << ", ";
        convert(16,n);
        cout << endl;
    }
}
