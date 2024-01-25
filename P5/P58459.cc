#include <iostream>
using namespace std;

bool is_valid_date(int d, int m, int y) {
    bool year = false;
    bool month = false;
    bool day = false;

    if (1800 <= y and y <= 9999) year = true;
    if (1 <= m and m <= 12) month = true;

    // bool day:
        // months with 31 days: 1, 3, 5, 7, 8, 10, 12
    if ((m <= 7 and m%2 == 1) or (m > 7 and m%2 == 0)) {
        day = (1 <= d and d <= 31);
    }
    else if (m == 2) {

        //february, leap year
        if ((y%4 == 0 and y%100 != 0) or y%400 == 0) {
            day = (1 <= d and d <= 29);
        }
        else day = (1 <= d and d <= 28);
    }
    else day = (1 <= d and d <= 30);

    return (year and month and day);

}



int main() {
    int d, m, y;
    cin >> d >> m >> y;
    cout << is_valid_date(d, m, y) << endl;
}
