#include <iostream>
#include <vector>
using namespace std;

bool suma_odd(const vector<int>& v) {
    int size = v.size();
    bool odd = false;

    int i = 0;
    int j = i + 1;
    while (i < size - 1 and j < size and not odd) {
        if ((v[i] + v[j])%2 == 1) odd = true;
        ++i;
        ++j;
    }

    return odd;
}

int main() {
    int n;
    while (cin >> n) {
        vector<int> v(n);
        for (int i = 0; i < n; ++i) cin >> v[i];
        if (suma_odd(v)) cout << "yes" << endl;
        else cout << "no" << endl;

    }
}
