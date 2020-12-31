
// Returning a reference.
#include <iostream>
using namespace std;

double &f();
double val = 100.0;
int main()
{
    double newval;
    cout << f() << '\n';    // display val's value
    newval = f();           // assign value of val to newval
    cout << newval << '\n'; // display newval's value

    f() = 99.1;          // change val's value
    cout << f() << '\n'; // display val's new value
    return 0;
}
double &f()
{
    return val; // return reference to val
}

/* output:

100
100
99.1

*/