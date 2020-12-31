// More example of multiple bases classes.

#include <iostream>
using namespace std;

class base1
{
protected:
    int i;

public:
    base1(int x)
    {
        i = x;
        cout << "Constructing base1\n";
    }
    ~base1() { cout << "Destructing base1\n"; }
};

class base2
{
protected:
    int k;

public:
    base2(int x)
    {
        k = x;
        cout << "constructing base2\n";
    }
    ~base2() { cout << "Destructing base2\n"; }
};

class derived : public base1, public base2
{
public:
    /* Derived constructor uses no parameters,
		but still must be declared as taking them to
		pass them along to base classes.
	*/

    derived(int x, int y) : base1(x), base2(y)
    {
        cout << "Constructing derived\n";
    }

    ~derived() { cout << "Destructing derived\n"; }
    void show() { cout << i << " " << k << endl; }
};

int main()
{
    derived ob(3, 4);

    ob.show(); // displays 3 4

    return 0;
}

/* output:

Constructing base1
constructing base2
Constructing derived
3 4
Destructing derived
Destructing base2
Destructing base1

*/