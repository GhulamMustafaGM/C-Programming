/* Passing parameters to base class constructors 

	derived-constructor : base1 (arg-list),
						  base2 (arg-list), ...
						  baseN (arg-list);
						  {
	body of derived constructor 
						  }
*/

// Sample program

#include <iostream>
using namespace std;

class base
{
protected:
    int i;

public:
    base(int x)
    {
        i = x;
        cout << "Constructing base \n";
    }
    ~base() { cout << "Destructing base\n"; }
};

class derived : public base
{
    int j;

public:
    // derived uses x; y is passed along to base.

    derived(int x, int y) : base(y)
    {
        j = x;
        cout << "Constructing derived\n";
    }

    ~derived() { cout << "Destructing derived\n"; }
    void show() { cout << i << " " << j << endl; }
};

int main()
{
    derived ob(3, 4);

    ob.show(); // displays 4 3

    return 0;
}

/* output:

Constructing base
Constructing derived
4 3
Destructing derived
Destructing base

*/