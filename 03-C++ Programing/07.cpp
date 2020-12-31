// Demonstrate overloaded new and delete.

#include <iostream>
#include <new>
#include <cstdlib>
using namespace std;

class three_d
{
    int x, y, z; // 3-D coordinates
public:
    three_d()
    {
        x = y = z = 0;
        cout << "Constructing 0, 0, 0\n";
    }
    three_d(int i, int j, int k)
    {
        x = i;
        y = j;
        z = k;
        cout << "Constructing " << i << ", ";
        cout << j << ", " << k;
        cout << endl;
    }
    ~three_d() { cout << "Destructing\n"; }

    void *operator new(size_t size);
    void *operator new[](size_t size);
    void operator delete(void *p);
    void operator delete[](void *p);
    void show();
};
// new overloaded relative to three_d
void *three_d::operator new(size_t size)
{
    void *p;

    cout << "Allocating three_d object.\n";
    p = malloc(size);

    // throw an exception on failure
    if (!p)
    {
        bad_alloc ba;
        throw ba;
    }
    return p;
}

// new overloaded relative to array of three_d

void *three_d::operator new[](size_t size)
{
    void *p;

    cout << "Allocating array of three_d objects.\n";

    // throw an exception on failure
    p = malloc(size);
    if (!p)
    {
        bad_alloc ba;
        throw ba;
    }
    return p;
}

// delete overloaded relative to three_d.

void three_d::operator delete(void *p)
{
    cout << "Deleting three_d object.\n";
    free(p);
}
// delete overloaded relative to arrays of three_d
void three_d::operator delete[](void *p)
{
    cout << "Deleting array of three_d objects.\n";
    free(p);
}
// show x, y, z coordinates.

void three_d::show()
{
    cout << x << ", ";
    cout << y << ", ";
    cout << z << endl;
}
int main()
{
    three_d *p1, *p2;

    try
    {
        p1 = new three_d[3];       // allocate array
        p2 = new three_d(5, 6, 7); // allocate object
    }
    catch (bad_alloc ba)
    {
        cout << "Allocation error.\n";
        return 1;
    }

    p1[1].show();
    p2->show();

    delete[] p1; // delete array
    delete p2;   // delete object

    return 0;
}

/* Output:

Allocating array of three_d objects.
Constructing 0, 0, 0
Constructing 0, 0, 0
Constructing 0, 0, 0
Allocating three_d object.
Constructing 5, 6, 7
0, 0, 0
5, 6, 7
Destructing
Destructing
Destructing
Deleting array of three_d objects.
Destructing
Deleting three_d object.

*/