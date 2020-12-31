// USe a friend to overload <<.

#include <iostream>
using namespace std;

class three_d
{
    int x, y, z; // 3-D coordinates - now private
public:
    three_d(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    friend ostream &operator<<(ostream &ostream, three_d obj);
};

// Display x, y, z coordinates - three_d inserter.
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

/* Output: 

1, 2, 3
3, 4, 5
5, 6, 7

*/