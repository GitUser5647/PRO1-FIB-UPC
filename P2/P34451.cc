#include <iostream>
using namespace std;

int main () {
    int number;
    cin >> number;
    int counter = 0;
    int ai;

    while (cin >> ai) {
        if (ai%number == 0) ++ counter;
    }
    cout << counter << endl;
}
