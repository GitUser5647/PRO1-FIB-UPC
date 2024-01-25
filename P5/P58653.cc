#include <iostream>
using namespace std;

void print_line(char c, string s, bool b) {
    cout << s << "('" << c << "') = ";
    if (b) cout << "true" << endl;
    else cout << "false" << endl;
}


int main() {
    char c;
    cin >> c;

    string s;
    bool b;

    //char és lletra
    if (('A' <= c and c <= 'Z') or ('a' <= c and c <= 'z')) {
        s = "letter";
        b = true;
        print_line(c, s, b);

        // char és vocal
        if (c == 'A' or c == 'E' or c == 'I' or c == 'O' or c == 'U' or c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u') {
            s = "vowel";
            b = true;
            print_line (c, s, b);
            s = "consonant";
            b = false;
            print_line (c, s, b);
        }
        // char és consonant
        else {
            s = "vowel";
            b = false;
            print_line (c, s, b);
            s = "consonant";
            b = true;
            print_line (c, s, b);
        }

        // char es masjuscula
        if ('A' <= c and c <= 'Z') {
            s = "uppercase";
            b = true;
            print_line (c, s, b);
            s = "lowercase";
            b = false;
            print_line (c, s, b);
        }
        //char es minuscula
        else {
            s = "uppercase";
            b = false;
            print_line (c, s, b);
            s = "lowercase";
            b = true;
            print_line (c, s, b);
        }

        s = "digit";
        b = false;
        print_line (c, s, b);
    }

    else if ('0' <= c and c <= '9') {
        s = "letter";
        b = false;
        print_line(c, s, b);

        s = "vowel";
        b = false;
        print_line (c, s, b);

        s = "consonant";
        b = false;
        print_line (c, s, b);

        s = "uppercase";
        b = false;
        print_line (c, s, b);

        s = "lowercase";
        b = false;
        print_line (c, s, b);

        s = "digit";
        b = true;
        print_line (c, s, b);
    }

    else {
        s = "letter";
        b = false;
        print_line(c, s, b);

        s = "vowel";
        b = false;
        print_line (c, s, b);

        s = "consonant";
        b = false;
        print_line (c, s, b);

        s = "uppercase";
        b = false;
        print_line (c, s, b);

        s = "lowercase";
        b = false;
        print_line (c, s, b);

        s = "digit";
        b = false;
        print_line (c, s, b);
    }
}
