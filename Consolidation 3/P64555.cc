#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Coord {
    int x, y, d;
};

int distancia(const Coord& a, const Coord& b) {
    int sumax = a.x - b.x;
    if (sumax < 0) sumax = 0 - sumax;

    int sumay = a.y - b.y;
    if (sumay < 0) sumay = 0 - sumay;

    int dist = sumax + sumay;

    return dist;
}

bool comp(const Coord& a, const Coord& b) {
    if (a.d != b.d) return a.d < b.d;
    else if (a.x != b.x) return a.x < b.x;
    else return a.y < b.y;
}

void print(const Coord& a) {
    cout << a.x << ' ' << a.y << endl;
}

int main() {
    Coord referencia;
    cin >> referencia.x >> referencia.y;

    int n;
    cin >> n;

    vector<Coord> v(n);

    for (int i = 0; i < n; ++i) {
        cin >> v[i].x >> v[i].y;
        v[i].d = distancia(v[i], referencia);
    }

    sort(v.begin(), v.end(), comp);

    bool novad;

    for (int i = 0; i < n; ++i) {
        novad = false;

        if (i == 0 or v[i].d != v[i - 1].d) novad = true;


        if (novad) {
            cout << "punts a distancia " << v[i].d << endl;
            print(v[i]);
        }

        else print(v[i]);
    }
}
