#include <iostream>
#include <vector>
using namespace std;

vector<int> obtain_peaks(const vector<int>& v) {
    vector<int> w(0);
    int vsize = v.size();

    int positionw = 0;
    for (int i = 1; i < vsize - 1; ++i) {
        if (v[i] > v[i - 1] and v[i] > v[i + 1]) {
            w.push_back(v[i]);
        }
    }
    return w;
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    vector<int> w = obtain_peaks(v);
    int wsize = w.size();

    cout << wsize << ":";
    for (int i = 0; i < wsize; ++i) cout << " " << w[i];
    cout << endl;

    bool found = false;

    for (int i = 0; i < wsize - 1; ++i) {
        if (w[i] > w[wsize - 1]) {
            if (not found) {
                found = true;
                cout << w[i];
            }
            else cout << " " << w[i];
        }
    }
    if (not found) cout << "-" << endl;
    else cout << endl;
}
