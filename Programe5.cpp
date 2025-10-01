#include <iostream>
using namespace std;

class CopyConst {
    int x, y;

public:
   
    CopyConst(int a, int b) {
        x = a;
        y = b;
    }

    
    CopyConst(CopyConst &obj) {
        x = obj.x;
        y = obj.y;
    }

    void show() {
        cout << "x = " << x << ", y = " << y << endl;
    }
};

int main() {
    CopyConst c1(10, 20);   
    c1.show();              

    CopyConst c2(c1);       
    c2.show();             

    return 0;
}
