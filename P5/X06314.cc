#include <iostream>
using namespace std;

void info_sequence(int& sum, int& last) {
    int n;
    cin >> n;
    sum = 0;

    while (n != 0) {
        sum += n;
        last = n;
        cin >> n;
    }
}

int main() {
    int sumf, lastf;
    int counter = 1;
    info_sequence(sumf, lastf);

    int sum = 1;
    int last;

    while (sum != 0) {
        info_sequence(sum, last);
        if ((sum == sumf) and (last == lastf)) ++counter;
    }
    cout << counter << endl;

}
