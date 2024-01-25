#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> counter(10001, 0);

    for (int i = 0; i < n; ++i) {
        int number;
        cin >> number;
        ++counter[-1000000000 + number];
    }

    int vsize = counter.size();
    for (int i = 0; i < vsize; ++i) {
        if (counter[i] != 0) cout << (1000000000 + i) << " : " << counter[i] << endl;
    }
}
