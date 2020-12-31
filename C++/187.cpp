// Create an overloaded version of abs() called myabs().

#include <iostream>
using namespace std;

// myabs() is overloaded three ways.
int myabs(int i);
double myabs(double d);
long myabs(long l);

int main()
{
    cout << myabs(-10) << "\n";
    cout << myabs(-11.0) << "\n";
    cout << myabs(-9L) << "\n";
    return 0;
}
int myabs(int i)
{
    cout << "Using integer myabs(): ";

    if (i < 0)
        return -i;
    else
        return i;
}
double myabs(double d)
{
    cout << "Using double myabs(): ";
    if (d < 0.0)
        return -d;
    else
        return d;
}
long myabs(long l)
{
    cout << "Using long myabs(): ";
    if (l < 0)
        return -l;
    else
        return l;
}

/* output:

Using integer myabs(): 10
Using double myabs(): 11
Using long myabs(): 9

*/