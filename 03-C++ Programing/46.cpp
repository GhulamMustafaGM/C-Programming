/* Demonstrate const member functions.
	This program won't compile.
*/

#include <iostream>
using namespace std;

class Demo
{
    int i;

public:
    int geti() const
    {
        return i; // ok
    }

    void seti(int x) const
    {
        i = x; // error!
    }
};

int main()
{
    Demo ob;
    ob.seti(1900);
    cout << ob.geti();

    return 0;
}

/* Output:

No outp here.

*/