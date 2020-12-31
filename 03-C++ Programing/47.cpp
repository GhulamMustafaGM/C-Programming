// Demonstrate mutable.

#include <iostream>
    using namespace std;

class Demo
{
    mutable int i;
    int j;

public:
    int geti() const
    {
        return i; // ok
    }
    void seti(int x) const
    {
        i = x; // now, ok
    }
    /* The following function won't compile.
	void setj(int x) const {
	j = x; // Still Wrong!
	}
	*/
};

int main()
{
    Demo ob;
    ob.seti(1900);
    cout << ob.geti() << endl;

    return 0;
}

/* Output:

1900

*/