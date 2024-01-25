#include <iostream>
using namespace std;

void infoSequence(int& max, int& Ipos) {
    int n;
    cin >> n;
    max = n;
    int position = 1;
    while (n != 0) {
            if (n >= max) {
                max = n;
                Ipos = position;
            }
            cin >> n;
            ++position;
    }
}

int main() {
    int m, pos;
    infoSequence(m, pos);
    cout << m << " " << pos << " ";

    int seconds;
    bool found = false;

    cin >> seconds;
    int position2 = 0;

    while (seconds != 0 and not found) {
        ++position2;
        if (seconds == m) {
            found = true;
        }
        cin >> seconds;
    }
    if (found) cout << position2 << endl;
    else cout << "-" << endl;


}
