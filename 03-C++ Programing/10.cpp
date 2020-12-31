// Demonstrate a custom extractor.

#include <iostream>
using namespace std;

class three_d
{
    int x, y, z; // 3-D cordinates

public:
    three_d(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    friend ostream &operator<<(ostream &stream, three_d obj);
    friend istream &operator>>(istream &stream, three_d &obj);
};
// Display X, Y, Z coordinates - three_d inserter.

ostream &operator<<(ostream &stream, three_d obj)
{
    stream << obj.x << ", ";
    stream << obj.y << ", ";
    stream << obj.z << "\n";

    return stream; // return the stream
}

// Get three dimensional values - three_d extractor.
istream &operator>>(istream &stream, three_d &obj)
{
    cout << "Enter X,Y,Z values: ";
    stream >> obj.x >> obj.y >> obj.z;

    return stream;
}

int main()
{
    three_d a(1, 2, 3);
    cout << a;
    cin >> a;
    cout << a;

    return 0;
}

/* Output:

1, 2, 3
Enter X,Y,Z values: 4 5 6
4, 5, 6

*/