
#include <iostream>
using namespace std;

// Declare swap() using pointers.

void swap(int *x, int *y);

int main()
{

    int i, j;

    i = 10;
    j = 20;

    cout << "Initial values of i and j: ";
    cout << i << ' ' << j << '\n';

    swap(&j, &i); // call swap() with addresses of i and j
    cout << "Swapped values of i and j: ";
    cout << i << ' ' << j << '\n';

    return 0;
}
// Exchange arguments.
void swap(int *x, int *y)
{
    int temp;
    temp = *x; // save the value at address x
    *x = *y;   // put y into x
    *y = temp; // put x into y
}

/* output:

Initial values of i and j: 10 20
Swapped values of i and j: 20 10

*/