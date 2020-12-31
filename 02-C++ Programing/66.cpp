// constructors and destructors are executed

#include <iostream>
using namespace std;

class base
{
    base() { cout << "Constructing base\n"; }
    ~base() { "Destructing base\n"; }
};

class derived : public base
{
public:
    derived() { cout << "Constructing derived\n"; }
    ~derived() { cout << "Destructing derived\n"; }
};

int main()

{
    derived ob;

    // do nothing but construct and destruct ob

    return 0;
}

/* output:

Constructing base
Constructing derived
Destructing derived
Destructing base

*/