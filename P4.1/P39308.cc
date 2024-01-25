#include <iostream>
using namespace std;

int main() {
    int n;

    while (cin >> n) {
        cout << "divisors of " << n << ":";

        int r = 1;


        while (r*r < n) ++r;

        for (int i = 1; i <= r; ++i)
            if (n%i == 0) cout << " " << i;

        for (int i = r - 1; i >= 1; --i)
            if (n%i == 0 and n/i != r) cout << " " << n/i;
        cout << endl;
    }

}
