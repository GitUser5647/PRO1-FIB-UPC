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
    // r1 = r2
    if (r1.x_left == r2.x_left and r1.x_right == r2.x_right and r1.y_up == r2.y_up and r1.y_down == r2.y_down) return 4;

    // r1 inside r2
    else if (r1.x_left >= r2.x_left and r1.x_right <= r2.x_right and r1.y_up <= r2.y_up and r1.y_down >= r2.y_down) return 1;

    // r2 inside r1
    else if (r1.x_left <= r2.x_left and r1.x_right >= r2.x_right and r1.y_up >= r2.y_up and r1.y_down <= r2.y_down) return 2;

    // rectangles do not intersect
    else if (r1.x_left >= r2.x_right or r2.x_left >= r1.x_right or r1.y_down >= r2.y_up or r2.y_down >= r1.y_up) return 0;

    // rectangles intersect
    else return 3;
}

int main() {
    int n;
    cin >> n;

    while (n != 0) {
        bool inters = true;
        Rectangle r1, r2;
        read(r1);
        r2 = r1;
        --n;

        while (inters and n > 0) {
            read(r2);

            int rel = relationship(r1, r2);

            if (rel == 0) inters = false;

            else if (rel == 1) {
                r2 = r1;
            }

            else if (rel == 3) {
                if (r1.x_left > r2.x_left) r2.x_left = r1.x_left;
                if (r1.y_down > r2.y_down) r2.y_down = r1.y_down;

                if (r1.x_right < r2.x_right) r2.x_right = r1.x_right;
                if (r1.y_up < r2.y_up) r2.y_up = r1.y_up;
            }

            r1 = r2;
            --n;
        }

        if (not inters) {
            cout << "empty intersection" << endl;
            while (n > 0) {
                read(r2);
                --n;
            }
        }

        else {
            cout << "bottom left point = (" << r2.x_left << ", " << r2.y_down << "); ";
            cout << "top right point = (" << r2.x_right << ", " << r2.y_up << ")" << endl;
        }

        cin >> n;
    }
}
