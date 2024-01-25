#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Track {
  string artist, title, genre;
  int year;
};


bool comp(const Track& a, const Track& b) {
    if (a.artist != b.artist) return (a.artist < b.artist);
    else if (a.year != b.year) return (a.year < b.year);
    else return (a.title < b.title);
}


vector<Track> read_tracks(int n) {
    vector<Track> v(n);

    for (int i = 0; i < n; ++i) {
        cin >> v[i].artist >> v[i].title >> v[i].genre >> v[i].year;
    }
    return v;
}

void print_track(const Track &t) {
  cout << t.artist;
  cout << " (" << t.year;
  cout << ") " << t.title << " (" << t.genre << ")" << endl;
}

int main() {
    int n;
    cin >> n;

    vector<Track> v = read_tracks(n);

    sort(v.begin(), v.end(), comp);
        // ara v esta ordenat per autor, any i titol de la canço


    string gen;
    while (cin >> gen) {
        for (int i = 0; i < n; ++i) {
            if (gen == v[i].genre) print_track(v[i]);
        }
    }
}
