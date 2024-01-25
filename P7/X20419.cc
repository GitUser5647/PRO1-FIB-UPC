#include <iostream>
#include <vector>
#include <string>
using namespace std;

const int LENGTH_ALPHABET = 'z' - 'a' + 1;

char most_frequent_letter(const string& s) {
    vector<int> count(LENGTH_ALPHABET,0);

    int size = s.size();
    for (int i = 0; i < size; ++i) {
        ++count[s[i] - 'a'];
    }

    int vsize = count.size();
    int freq, position;
    freq = position = 0;

    for (int i = 0; i < vsize; ++i) {
        if (count[i] > freq) {
            freq = count[i];
            position = i;
        }
    }

    char lletra = 'a' + position;
    return lletra;
}

int main() {
    cout.setf(ios::fixed);
    cout.precision(2);

    int n;
    cin >> n;
    vector<string> v(n);
    int vsize = v.size();

    double length = 0;

    for (int i = 0; i < vsize; ++i) {
        cin >> v[i];
        length += v[i].size();
    }
    double average = length/n;
    cout << average << endl;

    for (int i = 0; i < vsize; ++i) {
        if (v[i].size() >= average) {
            cout << v[i] << ": " << most_frequent_letter(v[i]) << endl;
        }
    }

}
