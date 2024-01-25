#include <iostream>
using namespace std;

int main() {
    char parentesis;
    int count = 0;

    while (count >= 0 and cin >> parentesis) {
        if (parentesis == '(') ++count;
        else --count;
    }
    if (count == 0) cout << "yes" << endl;
    else cout << "no" << endl;
}
