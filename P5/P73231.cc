#include <iostream>
using namespace std;

int max2(int a, int b) {
    int max = a;
    if (b > a) max = b;

    return max;
}

int max4(int a, int b, int c, int d) {
    return max(max(a, b), max (c, d));
}
