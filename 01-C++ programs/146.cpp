// Demonstrate pointer arithmetic.

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int *i, j[10];
    double *f, g[10];
    int x;

    i = j;
    f = g;

    for (x = 0; x < 10; x++)
        cout << i + x << ' ' << f + x << endl;
    return 0;
}

/* output:

0x69fe78 0x69fea0
0x69fe7c 0x69fea8
0x69fe80 0x69feb0
0x69fe84 0x69feb8
0x69fe88 0x69fec0
0x69fe8c 0x69fec8
0x69fe90 0x69fed0
0x69fe94 0x69fed8
0x69fe98 0x69fee0
0x69fe9c 0x69fee8

*/