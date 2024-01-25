#include <iostream>
#include <string>
using namespace std;



bool is_palindrome(const string& s) {
    int size = s.length();
    int first = 0;
    int last = size - 1;
    bool pal = true;

    while (first <= last and pal) {
        if (s[first] != s[last]) pal = false;
        ++first;
        --last;
    }

    return pal;
}


int main() {
    string s;
    cin >> s;
    if (is_palindrome(s)) cout << "yes" << endl;
    else cout << "no" << endl;
}
