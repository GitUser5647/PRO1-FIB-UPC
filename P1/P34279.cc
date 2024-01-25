#include <iostream>
using namespace std;


int main () {
    int h, m, s;
    cin >> h >> m >> s;

    int seconds = (h*3600 + m*60 + s) + 1;

    int h2, m2, s2;

    h2 = (seconds/3600)%24;
    m2 = (seconds%3600)/60;
    s2 = (seconds%3600)%60;


    cout << h2/10 << h2%10 << ":" << m2/10 << m2%10 << ":" << s2/10 << s2%10 << endl;
}
