// Using a reference parameter.

#include <iostream>
using namespace std;

void f(int &i);

int main()
{
    int val = 1;

    cout << "Old value for val: " << val << endl;

    f(val); // pass address of val to f()

    cout << "New value for val: " << val << endl;

    return 0;
}

void f(int &i)
{
    i = 10; // this modifies calling argument
}

/* output:

Old value for val: 1
New value for val: 10

*/