#include <iostream>
using namespace std;

void escribe_base2(int x, int y) {
    if (x/2 != 0) escribe_base2(x/2, y/2);

    cout << x%2 << y%2;

}


int main() {
    int x, y;
    while (cin >> x >> y) {
        escribe_base2(x, y);
        cout << endl;
    }



}
