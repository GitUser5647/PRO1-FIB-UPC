#include <iostream>
using namespace std;

void reverse() {
    string s;
    while(cin >> s) {
        reverse();
        cout << s << endl;
    }
}


int main() {
    reverse();
}
