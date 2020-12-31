/* Copy constructor is called when a temporary object 
	is created as a function return value.
*/

#include <iostream>
using namespace std;

class myclass
{
public:
    myclass() { cout << "Normal constructor. \n"; }
    myclass(const myclass &obj) { cout << "Copy constructor.\n"; }
};

myclass f()
{
    myclass ob; // invoke normal constructor
    return ob;  // implicitly invoke copy constructor
}

int main()
{
    myclass a; // invoke normal constructor

    a = f(); // invoke copy constructor

    return 0;
}

/* output:

Normal constructor.
Normal constructor.

*/

// The this keyword

#include <iostream>
using namespace std;

class c1
{
    int i;

public:
    // same as i = val
    void load_i(int val) { this->i = val; }

    //same as return i
    int get_i() { this->i; }
};

int main()
{
    c1 o;

    o.load_i(100);
    cout << o.get_i();
    cout << endl;

    return 0;
}

/* output:

100

*/