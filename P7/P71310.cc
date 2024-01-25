#include <iostream>
#include <vector>
using namespace std;

//pre: two vectors, u and v, with the same size
//post: the scalar product of u and v

double scalar_product(const vector<double>& u, const vector<double>& v) {

    int size = u.size();
    double sum = 0;

    for (int i = 0; i < size; ++i) {
        sum += u[i]*v[i];
    }

    return sum;
}

int main() {
    int n;
    cin >> n;

    vector<double> a(n);
    vector<double> b(n);

    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < n; ++i) cin >> b[i];

    cout << scalar_product(a, b) << endl;

}
