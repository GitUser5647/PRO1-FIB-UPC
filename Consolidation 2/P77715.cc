#include <iostream>
#include <vector>
using namespace std;


bool pangram(const vector<int>& alf) {
    for (int i = 0; i < 26; ++i) if (alf[i] == 0) return false;
    return true;
}

bool es_lletra(char c) {
    return (c >= 'a' and c <= 'z') or (c >= 'A' and c <= 'Z');
}

int main() {
    char c;
    while (cin >> c) {
        vector<int> alf(26, 0);


        while (c != '.') {
            if (es_lletra(c)) {
                if (c >= 'A' and c <= 'Z') c += ('a' - 'A');
                int aux = c - 'a';
                ++alf[aux];
            }
            cin >> c;
        }

        if (pangram(alf)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
