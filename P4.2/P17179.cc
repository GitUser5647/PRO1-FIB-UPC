#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(4);

    int n;
    cin >> n;


    for (int i = 1; i <= n; ++i) {
        int m;
        cin >> m;

        double first;
        cin >> first;

        double suma, max, min;
        suma = max = min = first;


        for (int j = 1; j <= m - 1 ; ++j) {
            double number;
            cin >> number;
            suma += number;
            if (number > max) max = number;
            else if (number < min) min = number;
        }
        cout << min << " " << max << " " << suma/m << endl;
    }
}
