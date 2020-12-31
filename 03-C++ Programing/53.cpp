#include <iostream>
using namespace std;

extern "C" void myCfunc();

int main()
{
    myCfunc();

    return 0;
}

// This will link as a C function.
void myCfunc()
{
    cout << "This links as a C function. \n";
}

/* Output:

This links as a C function.

*/