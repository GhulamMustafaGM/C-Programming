/* Pure Virtual Functions and Abstract Classes

	To declare a pure virtula function, use this 
	general form:

	virtual type func-name(parameter-list) = 0;

	OR 

	class figure {
	double x,y; 
	public:
		void set_dim(double i, double j=0) {
		x = i;
		y = j;
		}
		virtual void show_area() = 0; // pure 
	};
*/

/* This progrma will not compile because the class
	circle does not override show_area().
*/

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
    virtual void show_area() = 0; // pure
};

class triangle : public figure
{
public:
    void show_area()
    {
        cout << "Triangle with height ";
        cout << x << " and base " << y;
        cout << x * 0.5 * y << ".\n";
    }
};

class rectangle : public figure
{
public:
    void show_area()
    {
        cout << "Rectangle with dimensions ";
        cout << x << "x" << y;
        cout << " has an area of ";
        cout << x * y << ".\n";
    }
};

class circle : public figure
{
    // no definition of show_area() will cause an error
};

int main()
{
    figure *p; // create a pointer to base type

    triangle t; // create objects of derived types
    rectangle r;

    circle c; // Illegal -- can't create!

    p = &t;
    p->set_dim(10.0, 5.0);
    p->show_area();

    p = &r;
    p->set_dim(10.0, 5.0);
    p->show_area();

    return 0;
}

/* Output:

Read program. Cannot create an output

*/