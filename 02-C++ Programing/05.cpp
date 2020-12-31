// Demonstrate malloc() and free().

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int *i;
    double *j;

    i = (int *)malloc(sizeof(int));

    if (!i)
    {
        cout << "Allocation Failure.\n";
        return 1;
    }
    j = (double *)malloc(sizeof(double));

    if (!j)
    {
        cout << "Allocation Failure.\n";
        return 1;
    }
    *i = 10;
    *j = 100.123;
    cout << *i << ' ' << *j;
    // free the memory
    free(i);
    free(j);

    return 0;
}

/* output:

10 100.123

*/