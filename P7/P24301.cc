#include <iostream>
#include <vector>
using namespace std;

vector<int> concatenation(const vector<int>& v1, const vector<int>& v2) {
    int n1 = v1.size();
    int n2 = v2.size();
    int n = n1 + n2;

    vector<int> v(n);
    for (int i = 0; i < n1; ++i) {
        v[i] = v1[i];
    }

    for (int i = n1; i < n; ++i) {
        v[i] = v2[i - n1];
    }
    return v;

}

int main() {
    int n1;
    cin >> n1;
    vector<int> v1(n1);
    for (int i = 0; i < n1; ++i) cin >> v1[i];

    int n2;
    cin >> n2;
    vector<int> v2(n2);
    for (int i = 0; i < n2; ++i) cin >> v2[i];

    vector<int> w = concatenation(v1, v2);
    int n = w.size();

    for (int i = 0; i < n; ++i) cout << w[i];
    cout << endl;

}
