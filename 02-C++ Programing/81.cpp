// An example of figure program

#include <iostream>
using namespace std;

class figure
{
protected:
    double x, y;

public:
    void set_dim(double i, double j = 0)
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
        cout << " has an are of ";
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
        cout << " has an are of ";
        cout << x * y << ".\n";
    }
};

class circle : public figure
{
public:
    void show_area()
    {
        cout << "Circle with radius ";
        cout << x;
        cout << " has an area of ";
        cout << 3.14 * x * x << ".\n";
    }
};

int main()
{
    figure *p; // create a pointe rot base base

    triangle t; // create objects of derived types
    rectangle r;
    circle c;

    p = &t;
    p->set_dim(10.0, 5.0);
    p->show_area();

    p = &r;
    p->set_dim(10.0, 5.0);
    p->show_area();

    p = &c;
    p->set_dim(9);
    p->show_area();

    return 0;
}

/* Output:

Triangle with height 10 and base 5 has an are of 25.
Rectangle with dimensions 10 x 5 has an are of 50.
Circle with radius 9 has an area of 254.34.

*/