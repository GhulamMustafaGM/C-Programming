// Overriding a template function.
#include <iostream>
using namespace std;

template <class X>
void swapargs(X &a, X &b)
{
    X temp;

    temp = a;
    a = b;
    b = temp;
    cout << "Inside template swapargs.\n";
}

// This overrides the generic version of swapargs() for ints.

void swapargs(int &a, int &b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;

    cout << "Inside swapargs int specilization.\n";
}

int main()
{
    int i = 10;
    int j = 20;
    double x = 10.1, y = 23.3;
    char a = 'x', b = 'z';

    cout << "Original i, j: " << i << ' ' << j << endl;
    cout << "Original x, y: " << x << ' ' << y << endl;
    cout << "Original a, b: " << a << ' ' << b << endl;

    swapargs(i, j); // calls explicitylyoverloaded swapargs()
    swapargs(x, y); // calls generic swapargs()
    swapargs(a, b); // calls generic swapargs()

    cout << "Swapped i, j: " << i << ' ' << j << endl;
    cout << "Swapped x, y: " << x << ' ' << y << endl;
    cout << "Swapped a, b: " << a << ' ' << b << endl;

    return 0;
}

/* Output: 

Original i, j: 10 20
Original x, y: 10.1 23.3
Original a, b: x z
Inside swapargs int specilization.
Inside template swapargs.
Inside template swapargs.
Swapped i, j: 20 10
Swapped x, y: 23.3 10.1
Swapped a, b: z x

*/