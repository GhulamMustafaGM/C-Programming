// Passing objects to functions

#include <iostream>
using namespace std;

class OBJ
{
    int i;

public:
    void set_i(intx) { i = x; }
    void out_i() { cout << i << " "; }
};

void f(OBJ x)
{
    x.out_i();    // outputs 10
    x.set_i(100); // this affects only local copy
    x.out_i();    // outpts 100
}

int main()
{
    OBJ 0;

    o.set_i(10);
    f(0);
    o.out_i(); // still outputs 10, value of i unchanged
    cout << endl;

    return 0;
}

/* output:

10 100 10

*/