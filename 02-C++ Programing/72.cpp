/* Granting Access: general form.

	base-class::member;

	class base {
	public:
		int j; // public in base 
		public:

			// here is access declaration

			base::j; // make j public again 
		// ...
	};
*/

// An example of access declaratons:

#include <iostream>
using namespace std;

class base
{
    int i; // private to base

public:
    int j, k;
    void seti(int x) { i = x; }
    int geti() { return i; }
};

// Inherit base as private.

class derived : private base
{
public:
    /* The next three statemetn s override
		base's inheritance as private
		and restore j, seti() and geti() to 
		public access.
	*/
    base::j;    // make j public again - but not k
    base::seti; // make seti() public
    base::geti; // make geti() public

    // base::i; // illegal, you cannot elevate access

    int a; // public
};

int main()
{
    derived ob;

    //ob.i = 10; // illegal because i is private in derived

    ob.j = 20; // legal because j is made public in drived
    //ob.k = 30; // illegal because a is public in derived
    ob.a = 40; // legal because a is public in drived
    ob.seti(10);

    cout << ob.geti() << " " << ob.j << " " << ob.a;

    return 0;
}

/* output:

10 20 40

*/