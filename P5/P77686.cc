#include <iostream>
using namespace std;


bool is_palindromic(int n) {
    int number = n;
    int reversed = n%10;
    n /= 10;

    while (n > 0) {
        int digit = n%10;
        reversed = reversed*10 + digit;
        n /= 10;
    }

    return (reversed == number);
}


int main() {
    int n;
    cin >> n;
    cout << is_palindromic(n) << endl;
}
