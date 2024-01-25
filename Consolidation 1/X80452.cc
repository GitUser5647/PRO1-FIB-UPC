#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int counterp = 0;
        int counterq = 0;

        while (n%7 != 0) {
            n -= 4;
            ++counterq;
        }

        while (n != 0) {
            n -= 7;
            ++counterp;
        }
        cout << counterp << " " << counterq << endl;
    }
}
