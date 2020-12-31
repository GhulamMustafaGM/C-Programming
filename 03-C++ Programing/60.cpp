// Store a class object in a vector.

#include <iostream>
#include <vector>
using namespace std;

class three_d
{
    int x, y, z;

public:
    three_d() { x = y = z = 0; }
    three_d(int a, int b, int c) { x = a, y = b, z = c; }

    three_d &operator+(int a)
    {
        x += a;
        y += a;
        z += a;

        return *this;
    }

    friend ostream &operator<<(ostream &stream, three_d obj);
    friend bool operator<(three_d a, three_d b);
    friend bool operator==(three_d a, three_d b);
};

// Display x, y, z coordinates - three_d inserter.
ostream &operator<<(ostream &stream, three_d obj)
{
    stream << obj.x << ", ";
    stream << obj.y << ", ";
    stream << obj.z << "\n";
    return stream; // return the stream
}

bool operator<(three_d a, three_d b)
{
    return (a.x + a.y + a.z) < (b.x + b.y + b.z);
}

bool operator==(three_d a, three_d b)
{
    return (a.x + a.y + a.z) == (b.x + b.y + b.z);
}

int main()
{
    vector<three_d> v;
    unsigned int i;

    // add objects to a vector
    for (i = 0; i < 10; i++)
        v.push_back(three_d(i, i + 2, i - 3));

    // display contents of vector
    for (i = 0; i < v.size(); i++)
        cout << v[i];

    cout << endl;

    // modify objects in a vector
    for (i = 0; i < v.size(); i++)
        v[i] = v[i] + 10;

    //display modified vector
    for (i = 0; i < v.size(); i++)
        cout << v[i];
    return 0;
}

/* ouput 

0, 2, -3
1, 3, -2
2, 4, -1
3, 5, 0
4, 6, 1
5, 7, 2
6, 8, 3
7, 9, 4
8, 10, 5
9, 11, 6

10, 12, 7
11, 13, 8
12, 14, 9
13, 15, 10
14, 16, 11
15, 17, 12
16, 18, 13
17, 19, 14
18, 20, 15
19, 21, 16

*/