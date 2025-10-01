#include <iostream>
#include <string>
using namespace std;

class student {
    int rno;         
    string name;
    int fee;

public:

    student(int rn, string nm, int fe) {
        rno = rn;
        name = nm;
        fee = fe;
    }


    student(const student &t) {
        rno = t.rno;
        name = t.name;
        fee = t.fee;
        cout << "\nCopy constructor called" << endl;
    }

    void display() {
        cout << rno << "\t" << name << "\t" << fee << endl;
    }
};

int main() {
    student s(19, "Student1", 10000); 
    s.display();

    student Student1(s);             
    Student1.display();

    return 0;
}
