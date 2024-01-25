#include <iostream>
using namespace std;

int operation() {
    char oper;
    cin >> oper;

    if (oper == '+') return operation() + operation();
    else if (oper == '*') return operation()*operation();
    else if (oper == '-') return operation() - operation();
    else return int(oper - '0');
}

int main() {
    cout << operation() << endl;
}
