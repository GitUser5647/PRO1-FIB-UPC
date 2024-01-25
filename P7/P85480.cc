#include <iostream>
#include <vector>
using namespace std;

bool is_prime(int n) {
    if (n < 2) return false;
    else {
        bool primer = true;
        int i = 2;
        while (i*i <= n and primer) {
            if (n % i == 0) primer = false;
            ++i;
        }
        return primer;
    }
}

int main() {
    int n;
    while (cin >> n) {
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }

        int first = 0;
        bool trobat = false;
        while (first < n and not trobat) {
            for (int i = first + 1; i < n; ++i) {
                if (is_prime(v[first] + v[i])) trobat = true;
            }
            ++first;
        }
        if (trobat) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}
