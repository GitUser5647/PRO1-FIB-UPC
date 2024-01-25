#include <iostream>
#include <vector>
using namespace std;

int common_elements(const vector<int>& X, const vector<int>& Y) {
    int search_x = 0;
    int search_y = 0;
    int counter = 0;

    int xsize = X.size();
    int ysize = Y.size();

    while (search_x < xsize and search_y < ysize) {
        if (X[search_x] > Y[search_y]) ++search_y;
        else if (X[search_x] < Y[search_y]) ++search_x;
        else {
            ++counter;
            ++search_x;
        }
    }
    return counter;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    int m;
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; ++i) cin >> b[i];

    cout << common_elements(a, b) << endl;
}
