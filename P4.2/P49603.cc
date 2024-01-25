#include <iostream>
using namespace std;

int main() {
    int n;
    bool found = false;
    int linea = 0;
    int last_line;

    while (cin >> n) {
        ++linea;
        bool ordre = true;

        if (n > 0) {
            string first;
            cin >> first;

            for (int i = 1; i <= n - 1; ++i) {
                string word;
                cin >> word;

                if (first > word) ordre = false;
                else first = word;
            }
        }

        if (ordre) {
            found = true;
            last_line = linea;
        }
    }

        if (found) cout << "The last line in increasing order is " << last_line << "." << endl;
        else cout << "There is no line in increasing order." << endl;
}
