#include <iostream>
using namespace std;

int main () {
    int n;
    bool primer = true;

    while (cin >> n) {
        int m;
        cin >> m;
        int number = 9;

        if (primer == true) primer = false;
        else cout << endl;

        for (int j = 1; j <= n; ++j) {
            for (int i = 1; i <= m; ++i) {
                cout << number;
                if (number-1 == -1) number = 9;
                else number = number - 1;
            }
            cout << endl;
        }
    }
}
