#include <iostream>
using namespace std;

int main()
{
    double *p;
    int i;

    p = new double[10]; // get a 10-element array

    // assign the values 100 through 109

    for (i = 0; i < 10; i++)
        p[i] = 100.00 + i;
    // display the contents of the array
    for (i = 0; i < 10; i++)
        cout << p[i] << " ";
    delete[] p; // delete the entire array

    return 0;
}

/* Output

100 101 102 103 104 105 106 107 108 109

*/