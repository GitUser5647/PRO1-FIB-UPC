#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int j = 1; j <= n; ++j) {
        int counter = 0;
        int first, second;
        cin >> first;

        if (first != 0) {
            cin >> second;
            while (second != 0) {
                if (first < second) ++counter;
                first = second;
                cin >> second;
            }
        }
        cout << counter << endl;
    }
}
