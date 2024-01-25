#include <iostream>
using namespace std;

int main() {
    string first;
    cin >> first;


    int counter = 1;
    int max_counter = 1;

    string word;
    while (cin >> word) {
        if (word == first) ++counter;
        else counter = 0;
        if (counter > max_counter) max_counter = counter;
    }
    cout << max_counter << endl;
}
