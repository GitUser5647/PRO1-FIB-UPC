#include <iostream>
using namespace std;

int max_dos(int x, int y) {
    int max = x;
    if (y > x) max = y;
    return max;
}

int min_dos(int x, int y) {
    int min = x;
    if (y < x) min = y;
    return min;
}


int sum_min_max(int x, int y, int z) {
    return max(max(x, y), z) + min(min(x, y), z);
}
