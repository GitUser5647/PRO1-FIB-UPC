#include <iostream>
using namespace std;

int main() {
    int number;

    while (cin >> number) {
        if (number < 10)
            cout << "The product of the digits of " << number << " is " << number << "." << endl;
        while (number > 9) {
            int multi = 1;
            cout << "The product of the digits of " << number << " is ";

            while (number != 0) {
                multi *= number%10;
                number /= 10;
            }
            cout << multi << "." << endl;
            number = multi;
        }
        cout << "----------" << endl;

    }
}
