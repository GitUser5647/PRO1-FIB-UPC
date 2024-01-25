#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        bool existeix = false;
        vector<int> v(n);
        int sum = 0;

        for (int i = 0; i < n; ++i) {
            cin >> v[i];
            sum += v[i];
        }


        int i = 0;
        while (i < n and not existeix) {
            if (v[i] == (sum - v[i])) existeix = true;
            ++i;
        }

        if (existeix) cout << "YES" << endl;
        else cout << "NO" << endl;
    }


}
