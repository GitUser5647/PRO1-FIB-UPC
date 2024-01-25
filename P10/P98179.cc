#include <iostream>
#include <vector>
using namespace std;

void insert(vector<double>& v) {
    int last = v.size() - 1;
    double last_v = v[last];
    int j = last;

    while ((j > 0) and (v[j - 1] > last_v)) {
        v[j] = v[j - 1];
        --j;
    }

    v[j] = last_v;
}

int main() {
    int n;
    cin >> n;
    vector<double> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    insert(v);

    for (int i = 0; i < n; ++i) cout << v[i] << " ";
    cout << endl;
}
