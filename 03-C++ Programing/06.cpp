// demonstrate nothrow version of new.

#include <iostream>
#include <new>
using namespace std;

int main()
{
    int *p, i;

    p = new (nothrow) int[32]; // use nothrow option
    if (!p)
    {
        cout << "Allocation failure.\n";
        return 1;
    }

    for (i = 0; i < 32; i++)
        p[i] = i;
    for (i = 0; i < 32; i++)
        cout << p[i] << " ";
    delete[] p; // free the memory

    return 0;
}

/* Output:

0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31

*/