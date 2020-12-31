// More example of derivation, destructors in reverse order.

#include <iostream>
using namespace std;

class base
{
public:
    base() { cout << "Constructing base\n"; }
    ~base() { cout << "Destructing base\n"; }
};

class derived1 : public base
{
public:
    derived1() { cout << "Constructing base1 \n"; }
    ~derived1() { cout << "Destructing base1 \n"; }
};

class derived2 : public derived1
{
public:
    derived2() { cout << "Constructing base2 \n"; }
    ~derived2() { cout << "Destructing base2 \n"; }
};

int main()
{
    derived2 ob;

    // construct and destruct ob

    return 0;
}

/* output:

Constructing base
Constructing base1
Constructing base2
Destructing base2
Destructing base1
Destructing base

*/