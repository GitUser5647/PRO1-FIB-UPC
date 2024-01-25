#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sumaodd, sumaeven;
    sumaodd = sumaeven = 0;

    while (n != 0) {
        sumaodd += n%10;
        n /= 10;
        sumaeven += n%10;
        n /= 10;
    }
    cout << sumaodd << " " << sumaeven << endl;

    if (sumaeven != 0 and sumaodd%sumaeven == 0) {
        cout << sumaodd << " = " << sumaodd/sumaeven << " * " << sumaeven << endl;
    }

    else if (sumaeven%sumaodd == 0) {
        cout << sumaeven << " = " << sumaeven/sumaodd << " * " << sumaodd << endl;
    }
    else cout << "nothing" << endl;
}
