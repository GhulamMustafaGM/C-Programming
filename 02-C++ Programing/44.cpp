// The copy constructor is called for initialization.

#include <iostream>
#include <cstdlib>
using namespace std;

class myclass
{
    int *p;

public:
    myclass(int i);             // normal constructor
    myclass(const myclass &ob); // copy constructor
    ~myclass();
    int getval() { return *p; }
};

// copy constructor.

myclass::myclass(const myclass &ob)
{
    p = new int;
    *p = *ob.p; // copy value
    cout << "Copy constructor allcoating p. \n";
}

// Normal constructor.

myclass::myclass(int i)
{
    cout << "Normal constructor allocating p.\n";
    p = new int;
    *p = i;
}

myclass::~myclass()
{
    cout << "Freeing p\n";
    delete p;
}

int main()
{
    myclass a(10); // calls normal constructor

    myclass b = a; // calls copy constructor

    return 0;
}

/* output:

Normal constructor allocating p.
Copy constructor allcoating p.
Freeing p
Freeing p

*/