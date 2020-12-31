// overload ().
#include <iostream>
using namespace std;

class three_d
{
    int x, y, z; // 3-D cooridinates

public:
    three_d() { x = y = z = 0; }
    three_d(int i, int j, int k)
    {
        x = i;
        y = j;
        z = k;
    }
    three_d operator()(int a, int b, int c);

    void show();
};

// overload ().

three_d three_d::operator()(int a, int b, int c)
{
    three_d temp;
    temp.x = x + a;
    temp.y = y + b;
    temp.z = z + c;

    return temp;
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
    three_d ob1(1, 2, 3), ob2;
    ob2 = ob1(10, 11, 12); // invoke operator()

    cout << "ob1: ";
    ob1.show();

    cout << "ob2: ";
    ob2.show();

    return 0;
}

/* output: 

ob1: 1, 2, 3
ob2: 11, 13, 15

*/