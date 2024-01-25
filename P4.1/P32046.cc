#include <iostream>
using namespace std;

int main() {
    int first;
    cin >> first;
    int counter = 0;
    cout << "nombres que acaben igual que " << first << ":"<< endl;

    int number;
    while (cin >> number) {
        int resta = first - number;
        if (resta%1000 == 0) {
            cout << number << endl;
            ++counter;
        }
    }
    cout << "total: " << counter << endl;
}
