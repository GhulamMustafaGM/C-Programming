// an example of second_d does not override who()

#include <iostream>
using namespace std;

class base
{
public:
    virtual void who()
    {
        cout << "Base\n";
    }
};

class first_d : public base
{
public:
    void who()
    {
        cout << "First derviation\n";
    }
};

class second_d : public base
{
    // who() not defined
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
    p->who();

    p = &second_obj;
    p->who(); /* access base's who() becuase
				second_d does not redefine it */

    return 0;
}

/* output: 

Base
First derviation
Base

*/