
// Demonstrate prefix and postfix ++.

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

    three_d operator+(three_d op2);  // op1 is implied
    three_d operator=(three_d op2);  // op1 is implied
    three_d operator++();            // prefix version of ++
    three_d operator++(int notused); // postfix version of ++

    void show();
};

// Overload +.

three_d three_d::operator+(three_d op2)
{
    three_d temp;

    temp.x = x + op2.x; // these are integer aditions
    temp.y = y + op2.y; // and the + retains its original
    temp.z = z + op2.z; // meaning relative to them.

    return temp;
}

// overload assignment.

three_d three_d::operator=(three_d op2)
{
    x = op2.x; // these are integer assignments
    y = op2.y; // and the = retains its original
    z = op2.z; // meaning relative to them.

    return *this;
}

// overload the prefix version of ++.

three_d three_d::operator++()
{
    x++; // increment x, y, and z
    y++;
    z++;

    return *this // return altered value
}

// overload the postfix version of ++.

three_d three_d::operator++(int notused)
{
    three_d temp = *this; // save original value

    x++;
    y++;
    z++;

    return temp; // return original value
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
    three_d a(1, 2, 3), b(10, 10, 10), c;

    a.show();
    b.show();

    c = a + b; // add a and b together
    c.show();

    c = a + b + c; // add a, b and c together
    c.show();

    c = b = a; // demonstrate mutlitple assignment
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