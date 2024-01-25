#include <iostream>
using namespace std;

int main() {
    int n;

    while (cin >> n) {
    int counter = 0;
    int number = n;

        while (number > 1){
            if (number%2 == 0) {
                number /=2;
                ++counter;
            }
            if (number%2 != 0 and number != 1) {
                number = number*3 + 1;
                ++counter;
            }
        }
        cout << counter << endl;
    }
}
