#include <iostream>
using namespace std;

int main () {
    double number;
    cin >> number;
    int numberd = number;
    int numbert = number + 0.5;

    if (numberd == number)
        cout << numberd << " " << numberd << " " << numberd << endl;

    else
        cout << numberd << " " << numberd +1 << " " << numbert << endl;
}
