// Overloading ambiguity.

#include <iostream>
using namespace std;

float myfunc(float i);
double myfunc(double i);
int main()
{
    // unambiguous, calls myfunc(double)
    cout << myfunc(10.1) << " ";
    // ambiguous
    cout << myfunc(10);

    return 0;
}
float myfunc(float i)
{
    return i;
}
double myfunc(double i)
{
    return -i;
}

/* 

*** Error ***

*/