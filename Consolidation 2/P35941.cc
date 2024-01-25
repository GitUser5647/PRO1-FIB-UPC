#include <iostream>
#include <vector>
using namespace std;


int busca_posicion(char c, const string& code) {
    for (int i = 0; i < code.size(); ++i) if (c == code[i]) return i;

    return -1; //no tendria que llegar aqui nunca
}


void traduce(const string& frase, const string& code) {
    for (char c : frase) {
        if (c == '_') cout << ' ';
        else {
            int i = busca_posicion(c, code);
            char aux = 'a' + i;
            cout << aux;
        }
    }


    cout << endl;
}


int main() {
    string code;
    while (cin >> code) {
        int n;
        cin >> n;

        string frase;
        for (int i = 0; i < n; ++i) {
            cin >> frase;
            traduce(frase, code);

        }

        cout << endl;
    }

}
