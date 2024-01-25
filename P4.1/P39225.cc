#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n - 1; ++i) {
        int number;
        cin >> number;
    }

    int result;

    bool number_n = true;
    int number2;
    while (cin >> number2)
        if (number_n == true) {
            number_n = false;
            result = number2;
        cout << "At the position " << n << " there is a(n) " << result << "." << endl;
        }

}
