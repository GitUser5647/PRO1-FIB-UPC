#include <iostream>
using namespace std;

int main () {
    char x1, x2;
    cin >> x1 >> x2;


    if (int(x1) == int(x2))
        cout << "-" << endl;

    else if ((int(x1) - int(x2) == -15) or (int(x1) - int(x2) == -6) or (int(x1) - int(x2) == 21))
        cout << "1" << endl;

    else if ((int(x1) - int(x2) == 15) or (int(x1) - int(x2) == 6) or (int(x1) - int(x2) == -21))
        cout << "2" << endl;
}
