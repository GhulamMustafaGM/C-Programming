/* The casting operators have five casting operators. These are
	dynamic_cast, const_cast, reinterpret_cast, and static_cast
*/

// Demonstrate dynamic_cast

#include <iostream>
using namespace std;

class Base
{
public:
    virtual void f() { cout << "Inside Base\n"; }
    // ...
};

class Derived : public Base
{
public:
    void f() { cout << "Inside Derived\n"; }
};
int main()
{
    Base *bp, b_ob;
    Derived *dp, d_ob;

    dp = dynamic_cast<Derived *>(&d_ob);
    if (dp)
    {
        cout << "Cast from Derived * to Derived * OK.\n";
        dp->f();
    }
    else
        cout << "Error\n";

    cout << endl;

    bp = dynamic_cast<Base *>(&d_ob);
    if (bp)
    {
        cout << "Cast from Derived * to Base * OK.\n";
        bp->f();
    }
    else
        cout << "Error\n";
    cout << endl;
    bp = dynamic_cast<Base *>(&b_ob);
    if (bp)
    {
        cout << "Cast from Base * to Base * OK.\n";
        bp->f();
    }
    else

        cout << "Error\n";

    cout << endl;
    dp = dynamic_cast<Derived *>(&b_ob);
    if (dp)
        cout << "Error\n";
    else
        cout << "Cast from Base * to Derived * not OK.\n";

    cout << endl;

    bp = &d_ob; // bp points to Derived object
    dp = dynamic_cast<Derived *>(bp);
    if (dp)
    {
        cout << "Casting bp to a Derived * OK\n"
             << "because bp is really pointing\n"
             << "to a Derived object.\n";
        dp->f();
    }
    else
        cout << "Error\n";

    cout << endl;

    bp = &b_ob; // bp points to Base object
    dp = dynamic_cast<Derived *>(bp);
    if (dp)
        cout << "Error";
    else
    {
        cout << "Now casting bp to a Derived *\n"
             << "is not OK because bp is really \n"
             << "pointing to a Base object.\n";
    }

    cout << endl;

    dp = &d_ob; // dp points to Derived object
    bp = dynamic_cast<Base *>(dp);
    if (bp)
    {
        cout << "Casting dp to a Base * is OK.\n";
        bp->f();
    }
    else
        cout << "Error\n";

    return 0;
}

/* Output:

Cast from Derived * to Derived * OK.
Inside Derived

Cast from Derived * to Base * OK.
Inside Derived

Cast from Base * to Base * OK.
Inside Base

Cast from Base * to Derived * not OK.

Casting bp to a Derived * OK
because bp is really pointing
to a Derived object.
Inside Derived

Now casting bp to a Derived *
is not OK because bp is really
pointing to a Base object.

Casting dp to a Base * is OK.
Inside Derived

*/