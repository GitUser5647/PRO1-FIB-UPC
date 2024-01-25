#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 0) cout << "Incorrect position." << endl;
    else {
        for (int i = 1; i <= n - 1; ++i) {
        int number;
        cin >> number;
        }
        int solution;

        if (cin >> solution)
            cout << "At the position " << n << " there is a(n) " << solution << "." << endl;
        else cout << "Incorrect position." << endl;
    }

}
