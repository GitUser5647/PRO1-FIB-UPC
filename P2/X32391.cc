#include <iostream>
using namespace std;

int main () {
    int d, n, t;
    int counter = 0;
    cin >> d >> n >> t;

    for (int j = 1; j <= t; ++j) {
        int ai;
        cin >> ai;
        n = n - d + ai;
        if (n > 0) ++counter;
    }

    cout << counter << endl;
}
