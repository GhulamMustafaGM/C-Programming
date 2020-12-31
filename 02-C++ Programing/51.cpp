// This program uses friend operator++() functions.

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

    friend three_d operator+(three_d op1, three_d op2);
    three_d operator=(three_d op2);

    // use a reference to overload the ++
    friend three_d operator++(three_d &op1);
    friend three_d operator++(three_d &op1, int notused);
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

// Overload the =.

three_d three_d::operator=(three_d op2)
{
    x = op2.x;
    y = op2.y;
    z = op2.z;

    return *this;
}
/* Overload prefix ++ using a friend function.
    This requires the use of a reference parameter. */

three_d operator++(three_d &op1)
{
    op1.x++;
    op1.y++;
    op1.z++;

    return op1;
}
/* Overload postfix ++ using a friend function.
    This requires the use of a reference parameter. */

three_d operator++(three_d &op1, int notused)
{
    three_d temp = op1;

    op1.x++;
    op1.y++;
    op1.z++;

    return temp;
}
// Show X, Y, Z coordinates.

void three_d::show()
{
    cout << x << ", ";
    cout << y << ", ";
    cout << z << "\n";
}

int main()
{
    three_d a(1, 2, 3), b(10, 10, 10), c;
    a.show();
    b.show();

    c = a + b; // add a and b together
    c.show();

    c = a + b + c; // add a, b and c together
    c.show();
    c = b = a; // demonstrate multiple assignment
    c.show();
    b.show();

    ++c; // prefix increment
    c.show();

    c++; // postfix increment
    c.show();

    a = ++c;  // a receives c's value after increment
    a.show(); // a and c
    c.show(); // are the same

    a = c++;  // a receives c's value prior to increment
    a.show(); // a and c
    c.show(); // now differ

    return 0;
}

/* output:

1, 2, 3
10, 10, 10
11, 12, 13
22, 24, 26
1, 2, 3
1, 2, 3
2, 3, 4
3, 4, 5
4, 5, 6
4, 5, 6
4, 5, 6
5, 6, 7

*/