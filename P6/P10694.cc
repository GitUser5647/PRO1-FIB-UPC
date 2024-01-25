#include <iostream>
using namespace std;

void draw(int n) {
    if (n == 1) cout << "*" << endl;
    else {
        draw(n - 1);
        draw(n - 1);
        for (int i = 1; i <= n; ++i) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    draw(n);
}
