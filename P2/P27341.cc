#include <iostream>
using namespace std;

int main () {
    int number1;
    int sumaj = 0;
    while (cin >> number1) {
        int number2;
        cin >> number2;
        sumaj = 0;

        for (int j = number1; j <= number2; ++j) {
            int cub = 0;
            cub = j*j*j;
            sumaj += cub;
        }

        cout << "suma dels cubs entre " << number1 << " i " << number2 << ": " << sumaj << endl;
    }




}
