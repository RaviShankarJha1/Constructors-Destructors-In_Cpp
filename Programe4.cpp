#include <iostream>
using namespace std;

int count = 0;

class deconstruct {
public:
    // Constructor
    deconstruct() {
        count++;
        cout << "No. of objects created: " << count << endl;
    }

    // Destructor
    ~deconstruct() {
        count--;
        cout << "No. of objects destroyed: " << count << endl;
    }
};

int main() {
    deconstruct obj1;
    {
        deconstruct obj2, obj3;
    } 

    deconstruct obj4;
    return 0;
}
