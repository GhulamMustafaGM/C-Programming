// A simple application of virtual functions

#include <iostream>
using namespace std;

class figure
{
protected:
    double x, y;

public:
    void set_dim(double i, double j)
    {
        x = i;
        y = j;
    }
    virtual void show_area()
    {
        cout << "No area computation defined ";
        cout << "for this class.\n";
    }
};

class triangle : public figure
{
public:
    void show_area()
    {
        cout << "Triangle with height ";
        cout << x << " and base " << y;
        cout << " has an area of ";
        cout << x * 0.5 * y << ".\n";
    }
};

class rectangle : public figure
{
public:
    void show_area()
    {
        cout << "Rectangle with dimensions ";
        cout << x << " x " << y;
        cout << " has an area of ";
        cout << x * y << ".\n";
    }
};

int main()
{
    figure *p; // create a pointer ot base type

    triangle t; // create objects of derived types
    rectangle r;

    p = &t;
    p->set_dim(10.0, 5.0);
    p->show_area();

    p = &r;
    p->set_dim(10.0, 5.0);
    p->show_area();

    return 0;
}

/* Output:

Triangle with height 10 and base 5 has an area of 25.
Rectangle with dimensions 10 x 5 has an area of 50.

*/