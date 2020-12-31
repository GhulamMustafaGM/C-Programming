// one solution to the problem of passing objects.

#include <iostream>
#include <cstdlib>
using namespace std;

class myclass
{
    int *p;

public:
    myclass(int i);
    ~myclass();
    int getval() { return *p; }
};

myclass::myclass(int i)
{
    cout << "Allocating p\n";
    p = new int;
    *p = i;
}

myclass::~myclass()
{
    cout << "Freeing p\n";
    delete p;
}

/* This will NOT cause a problem.

	Because ob is now passed by reference, no
	copy of the calling argument is made and thus,
	no objects goes out-of-scope when display()
	terminates.
*/

void display(myclass &ob)
{
    cout << ob.getval() << endl;
}

int main()
{
    myclass a(10);
    display(a);

    return 0;
}

/* output:

Allocating p
10
Freeing p

*/