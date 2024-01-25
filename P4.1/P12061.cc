#include <iostream>
using namespace std;

int main() {
    string word;
    int counter = 0;
    bool start = false;

    while (cin >> word and word != "end") {
        if (start) ++counter;
        if (word == "beginning")  start = true;
    }

    if (start and word == "end") cout << counter << endl;
    else cout << "wrong sequence" << endl;
}
