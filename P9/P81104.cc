#include <iostream>
#include <vector>
using namespace std;

struct Subject {
    string name;            //  Subject's name
    double mark;            // Between 0 and 10, -1 shows NP
};

struct Student {
    string name;            // Student's name
    int idn;                // Student's IDN
    vector<Subject> subj;   // Subject list of the student
};




double reference_mark(const vector<Student>& stu, int searched_idn, string searched_subject) {
    for (int i = 0; i < stu.size(); ++i) {
        if (stu[i].idn == searched_idn) {
            for (int j = 0; j < stu[i].subj.size(); ++j) {
                if (stu[i].subj[j].name == searched_subject) return stu[i].subj[j].mark;
            }
        }
    }
    return -1;
}

double average_mark(const Student& s) {
    int n = 0;
    double total = 0;

    for (int i = 0; i < s.subj.size(); ++i) {
        if (s.subj[i].mark >= 0) {
            ++n;
            total += s.subj[i].mark;
        }
    }

    total = total/n;
    return total;
}


int main() {
    int n;
    cin >> n;

    vector<Student> stu(n);

    for (int i = 0; i < n; ++i) {
        int x;
        cin >> stu[i].name >> stu[i].idn >> x;

        vector<Subject> subj(x);
        stu[i].subj = subj;

        for (int j = 0; j < x; ++j) cin >> stu[i].subj[j].name >> stu[i].subj[j].mark;

    }

    int searched_idn;
    string searched_subject;

    while (cin >> searched_idn >> searched_subject) {
        int counter = 0;

        for (int i = 0; i < n; ++i) {
            if (average_mark(stu[i]) > reference_mark(stu, searched_idn, searched_subject)) ++counter;
        }

        cout << counter << endl;
    }
}
