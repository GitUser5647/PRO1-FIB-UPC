#include <iostream>
using namespace std;

int main() {
    int n;
    bool primer = true;

    while (cin >> n) {
        if (primer) primer = false;
        else cout << endl;

        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                cout << n;
            }
            cout << endl;
        }
    }
}
