#include <iostream>
#include <cmath>
using namespace std;

int main () {
    cout.setf(ios::fixed);
    cout.precision(2);

    int n;
    cin >> n;

    double sumaquadrats = 0;
    double suma = 0;

    for (int j = 1; j <= n; ++j) {
        double ai;
        cin >> ai;
        double quadrat = ai*ai;
        sumaquadrats += quadrat;

        suma += ai;
    }

    double divisor1 = n-1;
    double divisor2 = n*(n-1);

    double part1 = ((1/divisor1)*sumaquadrats);
    double part2 = ((1/divisor2)*(suma*suma));

    cout << (part1 - part2) << endl;
}
