#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    int counter = 0;
    vector<int> S(n);

    for (int i = 0; i < n; ++i) cin >> S[i];
    int m = S[n - 1];

    for (int i = 0; i < n - 1; ++i) {
        if (S[i] == m) ++counter;
    }

    cout << counter << endl;
}
