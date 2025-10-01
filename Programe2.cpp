#include <iostream>
using namespace std;

class construct 
{
public:
    int a, b;

    construct() {  
        a = 10;
        b = 20;
    }

    void display() {
        cout << "a = " << a << ", b = " << b << endl;
    }
};

int main() 
{
    construct obj;   
    obj.display();   
    return 0;
}
