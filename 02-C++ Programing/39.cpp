// Demosntrate a problem when passing objects.

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

// this will cause a problem.

void display(myclass ob)
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
Freeing p

*/