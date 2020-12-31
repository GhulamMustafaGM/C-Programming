// Overload [].

#include <iostream>
using namespace std;

const int size = 3;

class atype
{
    int a[size];

public:
    atype()
    {
        register int i;

        for (i = 0; i < size; i++)
            a[i] = i;
    }
    int operator[](int i) { return a[i]; }
};

int main()
{
    atype ob;

    cout << ob[2]; // displays 2

    return 0;
}

/* output:

2

*/