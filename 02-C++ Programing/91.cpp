// A generic safe array example.

#include <iostream>
#include <cstdlib>
using namespace std;

const int SIZE = 10;

template <class AType>
class atype
{
    AType a[SIZE];

public:
    atype()
    {
        register int i;

        for (i = 0; i < SIZE; i++)
            a[i] = i;
    }
    AType &operator[](int i);
};

// Provide range checking for atype.

template <class AType>
AType &atype<AType>::operator[](int i)
{
    if (i < 0 || i > SIZE - 1)
    {

        cout << "\nIndex value of ";
        cout << i << " is out-of-bounds.\n";
        exit(1);
    }
    return a[i];
}
int main()
{
    atype<int> intob;       // integer array
    atype<double> doubleob; // double array
    int i;
    cout << "Integer array: ";
    for (i = 0; i < SIZE; i++)
        intob[i] = i;
    for (i = 0; i < SIZE; i++)
        cout << intob[i] << " ";
    cout << '\n';
    cout << "Double array: ";

    for (i = 0; i < SIZE; i++)
        doubleob[i] = (double)i / 3;
    for (i = 0; i < SIZE; i++)
        cout << doubleob[i] << " ";
    cout << '\n';

    intob[12] = 100; // generates runtime error

    return 0;
}

/* Output:

Integer array: 0 1 2 3 4 5 6 7 8 9
Double array: 0 0.333333 0.666667 1 1.33333 1.66667 2 2.33333 2.66667 3

Index value of 12 is out-of-bounds.

*/