#include <iostream>
using namespace std;


int main() {
    char c;
    cin >> c;

    int smalls, mediums, longs;
    smalls = mediums = longs = 0;

    bool paraula = false;

    while (c != '.' and not paraula) {
        if ('a' <= c and c <= 'z') {
            paraula = true;
            int size = 1;
            cin >> c;
            while (paraula) {
                if ('a' <= c and c <= 'z') {
                    ++size;
                    cin >> c;
                }
                else paraula = false;
            }
            paraula = false;
            if (size < 5) ++smalls;
            else if (5 <= size and size <= 9) ++mediums;
            else ++longs;
        }
        if (c != '.') cin >> c;
    }
    cout << smalls << "," << mediums << "," << longs << endl;
}
