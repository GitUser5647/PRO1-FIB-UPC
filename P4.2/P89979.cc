#include <iostream>
using namespace std;

int main() {
    int n;
    bool found = false;
    int linea = 1;
    while (cin >> n and not found) {

        bool ordre = true;
        string first;
        cin >> first;

        for (int i = 1; i <= n - 1; ++i) {
            string word;
            cin >> word;

            if (first > word) ordre = false;
            else first = word;

        }

        if (ordre) found = true;
        else ++linea;
    }

        if (found) cout << "The first line in increasing order is " << linea << "." << endl;
        else cout << "There is no line in increasing order." << endl;
}
