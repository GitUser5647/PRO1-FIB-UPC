#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool contains(string a, string b) {
    bool cont = false;
    int asize = a.size();
    int bsize = b.size();

    for (int i = 0; i < asize; ++i) {
        if (a[i] == b[0]) {
            cont = true;
            for (int j = 1; j < bsize; ++j) {
                if (a[i + j] != b[j]) cont = false;
            }
            if (cont) return true;
        }
    }
    return cont;
}


int main() {
    int n;
    cin >> n;

    vector<string> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];

    for (int i = 0; i < n; ++i) {
        cout << v[i] << ":";
        for (int j = 0; j < n; ++j) {
            int isize = v[i].size();
            int jsize = v[j].size();

            //comprovem si la primera paraula és igual o més llarga que la segona per poder fer contains(a, b)
            if (isize >= jsize and contains(v[i], v[j])) cout << " " << v[j];
        }
        cout << endl;
    }
}
