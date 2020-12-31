/* Use overloaded inserter to write three_d
	objects to a file.
*/

#include <iostream>
#include <fstream>
using namespace std;

class three_d
{
    int x, y, z; // 3-D coordinates -- private

public:
    three_d(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    friend ostream &operator<<(ostream &stream, three_d obj);
};

// display x, y, z coordinates - three_d insrter.
ostream &operator<<(ostream &stream, three_d obj)
{
    stream << obj.x << ", ";
    stream << obj.y << ", ";
    stream << obj.z << endl;

    return stream;
}

int main()
{
    three_d a(1, 2, 3), b(3, 4, 5), c(5, 6, 7);
    ofstream out("threed");

    if (!out)
    {
        cout << "Cannot open file.";

        return 1;
    }
    out << a << b << c;

    out.close();

    return 0;
}

/*Output:

*/