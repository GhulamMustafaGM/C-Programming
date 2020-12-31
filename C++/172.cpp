// Demonstrate atoi(), atol(), and atof().

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int i;
    long j;
    double k;

    i = atoi("100");
    j = atol("100000");
    k = atof("-0.123");

    cout << i << ' ' << j << ' ' << k;
    cout << endl;

    return 0;
}

/* 

100 100000 -0.123

*/