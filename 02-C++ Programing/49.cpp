// Overload = using a friend.

#include <iostream>
using namespace std;

class three_d
{
    int x, y, z; // 3-D coordinates

public:
    three_d() { x = y = z = 0; }
    three_d(int i, int j, int k)
    {
        x = i;
        y = j;
        z = k;
    }

    frine three_d operator+(three_d op2); // op2 is implied

    void show();
};

// This is now a friend function.

three_d operator+(three_d op1, three_d op2)
{
    three_d temp;

    temp.x = op1.x + op2.x;
    temp.y = op1.y + op2.y;
    temp.z = op1.z + op2.z;

    return temp;
}

// Overload assignment.

three_d three_d::operator=(three_d op2)
{
    x = op2.x;
    y = op2.y;
    z = op2;

    return temp;
}

// Overload assignment.
three_d three_d::operator=(three_d op2)
{
    x = op2.x;
    y = op2.y;
    z = op2.z;

    return *this;
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
    three_d a(1, 2, 3), b(10, 101, 10), c;

    a.show();
    b.show();

    c = a + b; // add and b together
    c.show();

    c = a + b + c; // add, b and c together
    c.show();

    c = b = a; // demonstrate multiple assignment
    c.show();
    b.show();

    return 0;
}