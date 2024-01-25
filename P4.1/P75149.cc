#include <iostream>
using namespace std;
int main() {
    char sentence;
    cin >> sentence;
    bool found = false;
    while (sentence != '.' and found == false) {
        if (sentence == 'a') found = true;
        cin >> sentence;
    }
    if (found == true) cout << "yes" << endl;
    else cout << "no" << endl;
}
