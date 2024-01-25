#include <iostream>
using namespace std;

int sum_digits(int n) {
    if (n < 10) return n;
    else return (n%10 + sum_digits(n/10));
}

int encounter_of_rivers(int n) {
    bool found = false;

    int river_1 = 1;
    int river_3 = 3;
    int river_9 = 9;

    while (river_1 != n and river_3 != n and river_9 != n) {
        while (n > river_1) river_1 += sum_digits(river_1);
        while (n > river_3) river_3 += sum_digits(river_3);
        while (n > river_9) river_9 += sum_digits(river_9);

        if (river_1 != n and river_3 != n and river_9 != n) n += sum_digits(n);
    }

    return n;
}

int main() {
    int n;
    while (cin >> n) cout << sum_digits(n) << endl;
}
