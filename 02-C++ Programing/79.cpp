// The following program demosntrates this heirarchy.

#include <iostream>
using namespace std;

class base
{
public:
    virtual void who()
    {
        cout << "Base \n";
    }
};

class first_d : public base
{
public:
    void who()
    {
        cout << "First derivation \n";
    }
};

// second_d now inherited first_d -- not base.

class second_d : public first_d
{
    // who() not difined
};

int main()

{
    base base_obj;
    base *p;
    first_d first_obj;
    second_d second_obj;

    p = &base_obj;
    p->who(); // access base's who()

    p = &first_obj;
    p->who(); // access base's first_d's who()

    p = &second_obj;
    p->who(); /* access first_d's who() because 
				second_d does not redefine it */

    return 0;
}

/* output: 

Base
First derivation
First derivation

*/