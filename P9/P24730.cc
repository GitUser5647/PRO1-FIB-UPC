#include <iostream>
#include <algorithm>
using namespace std;

struct info {
    string name;
    int caramels;
    int pastanagues;
};

bool comp(const info& a, const info& b) {
    if (a.caramels == b.caramels) {
        if (a.pastanagues == b.pastanagues) {
            if (a.name.size() == b.name.size()) return a.name < b.name;
            else return a.name.size() < b.name.size();
        }
        else return a.pastanagues > b.pastanagues;
    }
    else return a.caramels > b.caramels;
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int m;
        cin >> m;

        vector<info> cas(m);
        for (int j = 0; j < m; ++j) {
            cin >> cas[j].name >> cas[j].caramels >> cas[j].pastanagues;
        }

        sort(cas.begin(), cas.end(), comp);



        for (int j = 0; j < m; ++j) {
            cout << cas[j].name << endl;
        }
        cout << endl;
    }
}
