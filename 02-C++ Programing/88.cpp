// A generic version of myabs().

#include <iostream>
using namespace std;

template <class X>
X myabs(X val)
{
    return val < 0 ? -val : val;
}

int main()
{
    cout << myabs(-10) << endl; // integer abs

    cout << myabs(-10.0) << endl; // double abs

    cout << myabs(-10L) << endl; // long abs

    cout << myabs(-10.0F) << endl; // float abs

    return 0;
}

/* Output:

10
10
10
10

*/