#include <iostream>
using namespace std;

int inverse(int n) {
    int x = 0;
    while (n != 0) {
        x = x*10 + n%10;
        n /= 10;
    }
    return x;
}


int fatten(int n) {
    if (n < 10) return n;
    else {
        int y = fatten(n/10);
        if (n%10 < y%10) return y*10 + y%10;
        else return (y*10 + n%10);
    }
}

int main() {
    int n;
    cin >> n;
    cout << fatten(n) << endl;
}
