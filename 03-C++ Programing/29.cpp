// Use a reference with typeid.

#include <iostream>
#include <typeinfo>
using namespace std;

class Base
{
    virtual void f(){}; // make Bae polymorphic
                        // ...
};

class Derived1 : public Base
{
    // ...
};

class Derived2 : public Base
{
    // ...
};

// Demonstrate typid wit a reference paramerter.
void WhatType(Base &ob)
{
    cout << "ob is referencing an object of type ";
    cout << typeid(ob).name() << endl;
}
int main()
{
    int i;

    Base baseob;
    Derived1 ob1;
    Derived2 ob2;

    WhatType(baseob);
    WhatType(ob1);
    WhatType(ob2);

    return 0;
}

/* Output:

ob is referencing an object of type class Base
ob is referencing an object of type class Derived1
ob is referencing an object of type class Derived2

*/