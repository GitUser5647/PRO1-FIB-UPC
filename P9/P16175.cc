#include <iostream>
#include <vector>
using namespace std;

struct Pair {
    int value;              // Different than zero
    int pos;                // Greater or equal tham zero
};

typedef vector<Pair> Com_Vec;       // Sorted by pos!


Com_Vec sum(const Com_Vec& v1, const Com_Vec& v2) {
    int s1 = v1.size();
    int s2 = v2.size();

    int size = s1 + s2;

    Com_Vec v3(size);

    int i, j, k;
    k = i = j = 0;

    while (i < s1 and j < s2) {
        if (v1[i].pos < v2[j].pos) {
            v3[k] = v1[i];
            ++i;
            ++k;
        }

        else if (v2[j].pos < v1[i].pos) {
            v3[k] = v2[j];
            ++j;
            ++k;
        }

        else if (v2[j].value + v1[i].value != 0) {
            v3[k].pos = v2[j].pos;
            v3[k].value = v2[j].value + v1[i].value;
            ++i;
            ++j;
            ++k;
        }

        else {
            ++i;
            ++j;
        }
    }

    while (i < s1) {
        v3[k] = v1[i];
        ++i;
        ++k;
    }

    while (j < s2) {
        v3[k] = v2[j];
        ++j;
        ++k;
    }

    Com_Vec r(k);

    for (int i = 0; i < k; ++i) {
        r[i] = v3[i];
    }

    return r;
}

void read(Com_Vec& v) {
    char c;
    for (int i = 0; i < v.size(); ++i) {
        cin >> v[i].value >> c >> v[i].pos;
    }
}

int main() {
    int k;
    cin >> k;

    for (int i = 0; i < k; ++i) {
        int n;

        cin >> n;
        Com_Vec v1(n);
        read(v1);

        cin >> n;
        Com_Vec v2(n);
        read(v2);

        Com_Vec v3 = sum(v1, v2);
        int size = v3.size();

        cout << size;

        for (int i = 0; i < size; ++i) {
            cout << " " << v3[i].value << ";" << v3[i].pos;
        }
        cout << endl;
    }
}
