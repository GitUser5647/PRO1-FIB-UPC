#include <iostream>
#include <vector>
using namespace std;

int MAX = 1000000;


int main() {
    int number;
    vector<bool> v(MAX + 1, true);
    v[0] = false;
    v[1] = false;

    for (int i = 2; i*i <= MAX; ++i) {
        if (v[i]) {
            for (int j = 2*i; j <= MAX; j = j + i) {
                v[j] = false;
            }
        }
    }

    while (cin >> number) {
        cout << number << " is ";

        if(v[number]) cout << "prime" << endl;
        else cout << "not prime" << endl;
    }
}
