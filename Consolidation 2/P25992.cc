#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


bool comp(int a, int b) {
    return a > b;
}


void escriu1(const vector<int>& v) {
    int n = v.size();
    int i = 0;
    bool primer = true;

    while (v[i] == 0 and i < n) ++i;

    while (i < n) {
        if (primer) primer = false;
        else cout << ' ';
        cout << v[i];
        ++i;
    }

    cout << endl;
}


void escriu2(const vector<int>& v) {
    int n = v.size();

    int i = 0;
    bool primer = true;

    while (v[i] != 0 and i < n) {
        if (primer) primer = false;
        else cout << ' ';
        cout << v[i];
        ++i;
    }

    cout << endl;
}



int main() {
    int n;

    while (cin >> n) {
        int i, j;
        i = j = 0;
        vector<int> even(1000);
        vector<int> odd(1000);

        while (n != 0) {
            if (n%2 == 0) {
                even[i] = n;
                ++i;
            }

            else {
                odd[j] = n;
                ++j;
            }

            cin >> n;
        }

        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end(), comp);
        escriu1(even);
        escriu2(odd);

    }


}
