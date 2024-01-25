#include <iostream>
#include <vector>
using namespace std;

void read(vector<int>& v) {
    int n = v.size();
    for (int i = 0; i < n; ++i) cin >> v[i];
}

void reverse(const vector<int>& v) {
    int n = v.size();
    cout << v[n - 1];
    for (int i = n - 2; i >= 0; --i) cout << " " << v[i];
}

int main() {
    int n;
    while (cin >> n) {
        if (n > 0) {
            vector<int> v(n);
            read(v);
            reverse(v);
        }
        cout << endl;
    }
}
