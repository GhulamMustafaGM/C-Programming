// Template version of the figure hierarchy.

#include <iostream>
#include <cstdlib>
using namespace std;

template <class T>
class figure
{
protected:
    T x, y;

public:
    figure(T i, T j)
    {
        x = i;
        y = j;
    }
    virtual T area() = 0;
};

template <class T>
class triangle : public figure<T>
{
public:
    triangle(T i, T j) : figure<T>(i, j) {}
    T area()
    {
        return x * 0.5 * y;
    }
};

template <class T>
class rectangle : public figure<T>
{
public:
    rectangle(T i, T j) : figure<T>(i, j) {}
    T area()
    {
        return x * y;
    }
};
template <class T>
class circle : public figure<T>
{
public:
    circle(T i, T j = 0) : figure<T>(i, j) {}
    T area()
    {
        return 3.14 * x * x;
    }
};
// A factory for objects derived from figure.
figure<double> *generator()
{
    switch (rand() % 3)
    {
    case 0:
        return new circle<double>(10.0);
    case 1:
        return new triangle<double>(10.1, 5.3);
    case 2:
        return new rectangle<double>(4.3, 5.7);
    }
    return 0;
}

int main()

{
    figure<double> *p;
    int i;
    int t = 0, c = 0, r = 0;
    // generate and count objects
    for (i = 0; i < 10; i++)
    {
        p = generator();
        cout << "Object is " << typeid(*p).name();
        cout << ". ";
        // count it
        if (typeid(*p) == typeid(triangle<double>))
            t++;
        if (typeid(*p) == typeid(rectangle<double>))
            r++;
        if (typeid(*p) == typeid(circle<double>))
            c++;
        cout << "Area is " << p->area() << endl;
    }
    cout << endl;
    cout << "Objects generated:\n";
    cout << " Triangles: " << t << endl;
    cout << " Rectangles: " << r << endl;
    cout << " Circles: " << c << endl;
    return 0;
}

/* Output:

output Error

*/