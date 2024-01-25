#include <iostream>
using namespace std;

struct Clock {
  int h;    // hours (0<=h<24)
  int m;    // minutes (0<=m<60)
  int s;    // seconds (0<=s<60)
};

Clock midnight() {
    Clock mid;
    mid.h = mid.m = mid.s = 0;
    return mid;
}

void increase(Clock& r) {
    int time = r.h*60*60 + r.m*60 + r.s;

    ++time;

    time %= (24*60*60);

    r.h = time/(60*60);

    r.m = (time/60)%60;

    r.s = time%60;
}

void print(const Clock& r) {
    cout << r.h/10 << r.h%10 << ':' << r.m/10 << r.m%10 << ':' << r.s/10 << r.s%10 << endl;
}

int main() {
    print(midnight());
    Clock m = midnight();
    increase(m);
    print(m);

    Clock m2;
    cin >> m2.h >> m2.m >> m2.s;
    increase(m2);
    print(m2);
}
