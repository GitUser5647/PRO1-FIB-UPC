#include <iostream>
#include <vector>
using namespace std;

struct Student {
    int idn;
    string name;
    double mark;
    bool repeater;
};

void information(const vector<Student>& stu, double& min, double& max, double& avg) {
    avg = 0;
    min = 11;
    max = -1;
    int n = 0;

    for (int i = 0; i < stu.size(); ++i) {
        bool has_req = (stu[i].repeater == false and stu[i].mark >= 0);
        if (has_req) {
            avg += stu[i].mark;
            ++n;
            if (stu[i].mark > max) max = stu[i].mark;
            if (stu[i].mark < min) min = stu[i].mark;
        }
    }

    if (n != 0) avg = avg/n;
    else {
        min = max = avg = -1;
    }

}
