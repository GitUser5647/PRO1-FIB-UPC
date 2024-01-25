#include <iostream>
using namespace std;

int main() {
    char letter;
    int ew = 0;
    int sn = 0;
    while (cin >> letter) {
        if (letter == 'e') ++ew;
        else if (letter == 'w') --ew;

        if (letter == 's') ++sn;
        else if (letter == 'n') --sn;
    }
    cout << "(" << ew << ", " << sn << ")" << endl;

}
