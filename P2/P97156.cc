#include <iostream>
using namespace std;

int main () {
    int a,b;
    cin >> a >> b;
    int j = 0;

    if (a < b) {
        while ((a + j) < b) {
            cout << (a + j) << ",";
            j = j + 1;
        }
         cout << b << endl;
    }

    else if (a == b){
        while ((a + j) <= b) {
            cout << (a + j) << endl;
            j = j + 1;
        }
    }
    else
        cout << endl;
}
