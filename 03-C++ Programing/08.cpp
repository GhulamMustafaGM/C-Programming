// Demonstrate a custom inserter.

#include <iostream>
using namespace std;

class three_d
{
public:
    int x, y, z; // 3-D coordinates
    three_d(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
};

// Display x, y, z coordinates - three-d inserter.
ostream &operator<<(ostream &stream, three_d obj)
{
    stream << obj.x << ", ";
    stream << obj.y << ", ";
    stream << obj.z << endl;

    return stream; // return the stream
}

int main()
{
    three_d a(1, 2, 3), b(3, 4, 5), c(5, 6, 7);

    cout << a << b << c;

    return 0;
}

/* output:

1, 2, 3
3, 4, 5
5, 6, 7

*/