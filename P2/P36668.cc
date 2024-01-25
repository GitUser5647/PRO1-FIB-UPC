#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int j = 1;
    int result = 0;

    while (j <= n) {
        result = result + j*j;
        j = j+1;
    }

    cout << result << endl;
}
