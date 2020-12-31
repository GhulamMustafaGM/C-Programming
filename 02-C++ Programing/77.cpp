/* Virtual Functions 
	
	A virtual function is a function that is declared as 
	virtual in a base class and redefined in one or more
	derived classess. 
*/

// a short example that uses virtual functions.

#include <iostream>
using namespace std;

class base
{
public:
    virtual void who()
    { // specify a virtual
        cout << "Base\n";
    }
};

class first_d : public base
{
public:
    void who()
    { // redefine who() relative to first_d
        cout << "First derivation\n";
    }
};

clas second_d : public base{
    public :
        void who(){// redefine who() relative to second_d
                   cout << "Second derivation\n";
}
}
;

int main()
{
    base base_obj;
    base *p;

    first_d first_obj;
    second_d second_obj;

    p = &base_obj;
    p->who(); // access base's who

    p = &first_obj;
    p->who(); // access first_d's who

    p = &second_obj;
    p->who(); // access second_d's who

    return 0;
}

/* output:

Base
First derivation
Second derivation

*/