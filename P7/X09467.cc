#include <iostream>
#include <vector>
using namespace std;

vector<bool> ramps_pos(const vector<int>& V) {
    int n = V.size();
    vector<bool> w(n);

    for (int i = 0; i < n - 2; ++i) {
        int second = V[i + 1];
        int third = V[i + 2];
        w[i] = ((V[i] > second and second > third) or (V[i] < second and second < third));
    }
    return w;
}

int pot_conflictive(const vector<bool>& B) {
    int counter = 0;
    int n = B.size();
    for (int i = 0; i < n - 2; ++i) {
        if (B[i] and B[i + 1]) ++counter;
        if (B[i] and B[i + 2]) ++counter;
    }
    return counter;
}

int main() {
    int n;
    while (cin >> n) {
        vector<int> v(n);
        for (int i = 0; i < n; ++i) cin >> v[i];

        vector<bool> w = ramps_pos(v);

        cout << "positions with a ramp:";
        for (int i = 0; i < n; ++i) {
            if (w[i]) cout << " " << i;
        }
        cout << endl;

        cout << "potentially conflictive: " << pot_conflictive(w) << endl;
        cout << "---" << endl;
    }

}
