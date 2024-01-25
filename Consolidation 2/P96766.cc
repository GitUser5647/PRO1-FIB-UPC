#include <iostream>
#include <vector>
using namespace std;


bool es_palindrom(const string& s) {
    int i = 0;
    int j = s.size()-1;

    while (i < j) {
        if (s[i] != s[j]) return false;
        ++i;
        --j;
    }

    return true;
}


int main() {
    int n;
    cin >> n;

    while (n != 0) {
        cout << "-----" << endl;
        vector<string> v(n);

        int max_lon = 0;

        for (int i = 0; i < n; ++i) {
            cin >> v[i];
            if (es_palindrom(v[i]) and v[i].size() > max_lon) max_lon = v[i].size();
        }

        if (max_lon == 0) cout << "cap palindrom" << endl;

        else {
            for (int i = 0; i < n; ++i) {
                if (es_palindrom(v[i]) and v[i].size() == max_lon) cout << v[i] << endl;
            }
        }

        cin >> n;
    }
    cout << "-----" << endl;
}
