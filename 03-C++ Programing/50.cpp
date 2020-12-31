// An interesting benefits from implicity constructor conversion

#include <iostream>
using namespace std;

class myclass
{
    int num;

public:
    myclass(int i) { num = i; }
    int getnum() { return num; }
};

int main()
{
    myclass o(10);

    cout << o.getnum() << endl; // displays 10

    // now, use implicity conversion to assign new value
    o = 1000;

    cout << o.getnum() << endl; // displays 1000

    return 0;
}

/* Output:

10
1000

*/