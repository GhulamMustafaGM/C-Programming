// Demonstrate non-type template arguments.

#include <iostream>
#include <cstdlib>
using namespace std;

// Here, int size is a non-type argument.
template <class AType, int size>
class atype
{
    AType a[size]; // length of array is passed in size
public:
    atype()
    {
        register int i;
        for (i = 0; i < size; i++)
            a[i] = i;
    }
    AType &operator[](int i);
};

// Provide range checking for atype.
template <class AType, int size>
AType &atype<AType, size>::operator[](int i)
{
    if (i < 0 || i > size - 1)
    {
        cout << "\nIndex value of ";
        cout << i << " is out-of-bounds.\n";
        exit(1);
    }
    return a[i];
}

int main()
{
    atype<int, 10> intob;       // integer array of size 10
    atype<double, 15> doubleob; // double array of size 15
    int i;
    cout << "Integer array: ";
    for (i = 0; i < 10; i++)
        intob[i] = i;
    for (i = 0; i < 10; i++)
        cout << intob[i] << " ";
    cout << '\n';
    cout << "Double array: ";
    for (i = 0; i < 15; i++)
        doubleob[i] = (double)i / 3;
    for (i = 0; i < 15; i++)
        cout << doubleob[i] << " ";
    cout << '\n';
    intob[12] = 100; // generates runtime error

    return 0;
}

/* Output:

Integer array: 0 1 2 3 4 5 6 7 8 9
Double array: 0 0.333333 0.666667 1 1.33333 1.66667 2 2.33333 2.66667 3 3.33333 3.66667 4 4.33333 4.66667

Index value of 12 is out-of-bounds.

*/