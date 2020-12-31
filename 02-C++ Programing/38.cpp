// constructors, destructors, and passing objects.

#include <iostream>
using namespace std;

class myclass
{
    int val;

public:
    myclass(int i)
    {
        val = i;
        cout << "Constructing \n";
    }
    ~myclass() { cout << "Destructing\n"; }
    int getval() { return val; }
};

int main()
{
    myclass a(10);

    display(a);

    return 0;
}

/* output:

Constructing
10
Destructing
Destructing

*/