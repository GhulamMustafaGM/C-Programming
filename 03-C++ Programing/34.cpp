// Use dynamic_cast to replace typeid.

#include <iostream>
#include <typeinfo>
using namespace std;

class Base
{
public:
    virtual void f() {}
};
class Derived : public Base
{
public:
    void derivedOnly()
    {
        cout << "Is a Derived Object\n";
    }
};
int main()
{
    Base *bp, b_ob;
    Derived *dp, d_ob;
    // ************************************
    // use typeid
    // ************************************
    bp = &b_ob;
    if (typeid(*bp) == typeid(Derived))
    {
        dp = (Derived *)bp;
        dp->derivedOnly();
    }
    else
        cout << "Cast from Base to Derived failed.\n";
    bp = &d_ob;
    if (typeid(*bp) == typeid(Derived))
    {
        dp = (Derived *)bp;
        dp->derivedOnly();
    }
    else
        cout << "Error, cast should work!\n";
    // ************************************
    // use dynamic_cast
    // ************************************
    bp = &b_ob;
    dp = dynamic_cast<Derived *>(bp);
    if (dp)
        dp->derivedOnly();
    else
        cout << "Cast from Base to Derived failed.\n";
    bp = &d_ob;
    dp = dynamic_cast<Derived *>(bp);
    if (dp)
        dp->derivedOnly();
    else
        cout << "Error, cast should work!\n";
    cout << endl;

    return 0;
}

/* Output:

Cast from Base to Derived failed.
Is a Derived Object
Cast from Base to Derived failed.
Is a Derived Object

*/