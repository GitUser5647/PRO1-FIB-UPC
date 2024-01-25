#include <iostream>
using namespace std;

int main() {
    int sequence;
    while (cin >> sequence) {


        int max;
        cin >> max;

        for (int i = 1; i <= sequence - 1; ++i) {
            int number;
            cin >> number;
            if (number > max) max = number;
        }
        cout << max << endl;
    }
}
