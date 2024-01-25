#include <iostream>
#include <vector>
#include <string>
using namespace std;

void reverse(const string& w) {
    int n = w.size();
    for (int i = n - 1; i >= 0; --i) {
        cout << w[i];
    }
    cout << endl;
}


int main() {
    int n;
    cin >> n;
    vector<string> v(n);

    for (int i = 0; i < n; ++i) cin >> v[i];
    for (int i = n - 1; i >= 0; --i) {
        reverse(v[i]);
    }
}
