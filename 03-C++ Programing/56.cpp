// Demonstrates how the conversion funciton works.

#include <iostream>
using namespace std;

class three_d
{
    int x, y, z; // 3-D coordinates
public:
    three_d(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }

    three_d operator+(three_d op2);
    friend ostream &operator<<(ostream &stream, three_d &obj);

    operator int() { return x * y * z; }
};
// Display X, Y, Z coordinates - three_d inserter.
ostream &operator<<(ostream &stream, three_d &obj)
{
    stream << obj.x << ", ";
    stream << obj.y << ", ";
    stream << obj.z << "\n";
    return stream; // return the stream
}

three_d three_d::operator+(three_d op2)
{
    three_d temp(0, 0, 0);

    temp.x = x + op2.x;
    temp.y = y + op2.y;
    temp.z = z + op2.z;
    return temp;
}
int main()
{
    three_d a(1, 2, 3), b(2, 3, 4);

    cout << a << b;

    cout << b + 100; // displays 124 because of conversion to int
    cout << "\n";

    a = a + b; // add two three_d objects - no conversion

    cout << a; // displays 3, 5, 7

    return 0;
}

/* Output:


1, 2, 3
2, 3, 4
124
3, 5, 7

*/