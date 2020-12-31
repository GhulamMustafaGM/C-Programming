// Demonstrating run-time type id.

#include "stdafx.h"
#include <iostream>
#include <typeinfo>
using namespace std;

class figure
{
protected:
    double x, y;

public:
    figure(double i, double j)
    {
        x = i;
        y = j;
    }
    virtual double area() = 0; // pure virtual
};

class triangle : public figure
{
public:
    triangle(double i, double j) : figure(i, j) {}
    double area()
    {
        return x * 0.5 * y;
    }
};

class rectangle : public figure
{
public:
    rectangle(double i, double j) : figure(i, j) {}
    double area()
    {
        return x * y;
    }
};
class circle : public figure
{
public:
    circle(double i, double j = 0) : figure(i, j) {}
    double area()
    {
        return 3.14 * x * x;
    }
};

// A factory for objects derived from figure.

figure *factory()
{
    switch (rand() % 3)
    {
    case 0:
        return new circle(10.0);
    case 1:
        return new triangle(10.1, 5.2);
    case 2:
        return new rectangle(4.3, 5.7);
    }
    return 0;
}

int main()
{
    figure *p; //pointer to base class
    int i;

    int t = 0, r = 0, c = 0;

    // generate and count objects

    for (i = 0; i < 10; i++)
    {
        p = factory(); // generate an object

        cout << "Object is " << typeid(*p).name();
        cout << ". ";

        // count it
        if (typeid(*p) == typeid(triangle))
            t++;
        if (typeid(*p) == typeid(rectangle))
            r++;
        if (typeid(*p) == typeid(circle))
            c++;

        // display its area

        cout << "Area is " << p->area() << endl;
    }

    cout << endl;
    cout << "Objects generated: \n";
    cout << "	Triangles: " << t << endl;
    cout << "	Rectangles: " << r << endl;
    cout << "	Circles: " << c << endl;

    return 0;
}

/* Output:

Object is class rectangle. Area is 24.51
Object is class rectangle. Area is 24.51
Object is class triangle. Area is 26.26
Object is class triangle. Area is 26.26
Object is class rectangle. Area is 24.51
Object is class triangle. Area is 26.26
Object is class circle. Area is 314
Object is class circle. Area is 314
Object is class triangle. Area is 26.26
Object is class rectangle. Area is 24.51

Objects generated:
        Triangles: 4
        Rectangles: 4
        Circles: 2
*/