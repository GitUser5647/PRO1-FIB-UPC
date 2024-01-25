#include <iostream>
using namespace std;

int main () {
    int t;
    cin >> t;

    if (t >= 100) {
        cout << "it's hot" << endl;
        cout << "water would boil" << endl;
    }

    else if (t > 30)
        cout << "it's hot" << endl;

    else if (t <= 0) {
        cout << "it's cold" << endl;
        cout << "water would freeze" << endl;
    }

    else if (t < 10)
        cout << "it's cold" << endl;

    else
        cout << "it's ok" << endl;
}
