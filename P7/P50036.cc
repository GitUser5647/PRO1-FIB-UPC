#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int evaluate(const vector<int>& p, int x) {
    int degree = p.size();
    int sumatori = 0;

    for (int i = 0; i < degree; ++i) {
        sumatori = sumatori + p[i]*pow(x, i);
    }
    return sumatori;

}

int main() {
    int n;
    cin >> n;

    vector<int> p(n);
    for (int i = 0; i < n; ++i) cin >> p[i];

    int x;
    cin >> x;

    cout << evaluate(p, x) << endl;
}
