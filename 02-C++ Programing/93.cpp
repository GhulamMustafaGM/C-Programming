// Demonstrate default template arguments.

#include <iostream>
#include <cstdlib>
using namespace std;

// Here, AType defaults to int and size defaults to 10.
template <class AType = int, int size = 10>
class atype
{
    AType a[size]; // size of array is passed in size
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
    atype<int, 100> intarray;  // integer array, size 100
    atype<double> doublearray; // double array, default size
    atype<> defarray;          // default to int array of size 10
    int i;
    cout << "int array: ";
    for (i = 0; i < 100; i++)
        intarray[i] = i;
    for (i = 0; i < 100; i++)
        cout << intarray[i] << " ";
    cout << '\n';

    cout << "double array: ";
    for (i = 0; i < 10; i++)
        doublearray[i] = (double)i / 3;
    for (i = 0; i < 10; i++)
        cout << doublearray[i] << " ";
    cout << '\n';
    cout << "defarray array: ";
    for (i = 0; i < 10; i++)
        defarray[i] = i;
    for (i = 0; i < 10; i++)
        cout << defarray[i] << " ";
    cout << '\n';

    return 0;
}

/* Output:
int array: 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99
double array: 0 0.333333 0.666667 1 1.33333 1.66667 2 2.33333 2.66667 3
defarray array: 0 1 2 3 4 5 6 7 8 9

*/