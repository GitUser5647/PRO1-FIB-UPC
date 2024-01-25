#include <iostream>
using namespace std;

struct Rectangle {
  int x_left, x_right, y_down, y_up;
};

//pre:
//post:
void read(Rectangle& r) {
    cin >> r.x_left >> r.x_right >> r.y_down >> r.y_up;
}


//pre:
//post:
int relationship(const Rectangle& r1, const Rectangle& r2) {
    int num;
    if (r1.x_left == r2.x_left and r1.x_right == r2.x_right and r1.y_up == r2.y_up and r1.y_down == r2.y_down) num = 4;
    else if (r1.x_left >= r2.x_left and r1.x_right <= r2.x_right and r1.y_up <= r2.y_up and r1.y_down >= r2.y_down) num = 1;
    else if (r1.x_left <= r2.x_left and r1.x_right >= r2.x_right and r1.y_up >= r2.y_up and r1.y_down <= r2.y_down) num = 2;
    else if (r1.x_left > r2.x_right or r2.x_left > r1.x_right or r1.y_down > r2.y_up or r2.y_down > r1.y_up) num = 0;
    else num = 3;

    return num;
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        Rectangle r1, r2;

        read(r1);
        read(r2);

        int rel = relationship(r1, r2);

        if (rel == 1) cout << "the first rectangle is inside the second one" << endl;
        else if (rel == 2) cout << "the second rectangle is inside the first one" << endl;
        else if (rel == 3) cout << "rectangles intersect" << endl;
        else if (rel == 4) cout << "rectangles are identical" << endl;
        else cout << "rectangles do not intersect" << endl;
    }

}
