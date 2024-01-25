#include <iostream>
using namespace std;

int main () {
    int number;
    cin >> number;

    int lastdigits = number%1000;

    int c = (lastdigits / 100);
    int d = (lastdigits % 100) / 10;
    int u = (lastdigits % 10);

    cout << (c + d + u) << endl;
}
