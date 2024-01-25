#include <iostream>
using namespace std;

int main () {
    int y, d, h, m, s;
    cin >> y >> d >> h >> m >> s;

    int y_s = y*365*24*3600;
    int d_s = d*24*3600;
    int h_s = h*3600;
    int m_s = m*60;

    cout << (y_s + d_s + h_s + m_s + s) << endl;
}
