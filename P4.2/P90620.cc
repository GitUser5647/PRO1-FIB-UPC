#include <iostream>
using namespace std;

int main() {
    int pre, med, post;
    int PICA = 3143;
    bool trobat = false;

    cin >> pre >> med;

    while (cin >> post and not trobat and post != 0) {
        if (pre < med and med > post and med > PICA) trobat = true;
        else {
            pre = med;
            med = post;
        }
    }
    if (trobat) cout << "YES" << endl;
    else cout << "NO" << endl;
}
