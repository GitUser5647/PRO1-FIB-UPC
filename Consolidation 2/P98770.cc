#include <iostream>
#include <vector>
using namespace std;

void calcula_posicions(const vector<double>& v, int& p, int& q) {
    int n = v.size();
    p = q = 0;

    for (int i = 1; i < n; ++i) {
        if (v[i] > v[p]) {
            q = p;
            p = i;
        }
    }
}


int main() {
    cout.setf(ios::fixed);
    cout.precision(6);

    int n;
    while (cin >> n) {
        vector<double> v(n);
        for (int i = 0; i < n; ++i) cin >> v[i];
        int p, q;

        calcula_posicions(v, p, q);

        double simpatia = 0;
        for (int i = q; i <= p; ++i) {
            simpatia += v[i];
        }
        cout << simpatia/(p-q+1) << endl;

    }
}
