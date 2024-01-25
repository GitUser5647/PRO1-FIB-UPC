#include <iostream>
using namespace std;


int sum_of_digits(int n) {
    if (n < 10) return n;
    else return n%10 + sum_of_digits(n/10);
}

bool is_multiple_3(int n) {
    if (n < 10) return (n%10 == 3 or n%10 == 6 or n%10 == 9);
    else return is_multiple_3(sum_of_digits(n));
}
