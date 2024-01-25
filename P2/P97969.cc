#include <iostream>
using namespace std;

int main () {
    char sentence;
    cin >> sentence;
    int counter = 0;

    while (sentence != '.') {
        if (sentence == 'a') ++counter;
        cin >> sentence;
    }
    cout << counter << endl;
}
