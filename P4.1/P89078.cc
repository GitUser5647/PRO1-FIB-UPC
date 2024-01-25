#include <iostream>
using namespace std;

int main() {
    int number;
    int position = 0;
    bool found = false;
    while (cin >> number and found == false) {
        if (number%2 != 0) ++position;
        else found = true;
    }
    cout << position + 1 << endl;
}
