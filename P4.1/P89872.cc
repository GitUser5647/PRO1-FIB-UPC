#include <iostream>
using namespace std;

int main() {
    string max;
    cin >> max;
    string max_dos;

    string word;
    while (cin >> word) {

        if (word > max) {
            max_dos = max;
            max = word;
        }
        if (word < max and word > max_dos) max_dos = word;
    }
    cout << max_dos << endl;
}
