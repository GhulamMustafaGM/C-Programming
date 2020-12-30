#include <iostream>
using namespace std;

int main()

{
    int i;

    for (i = 1; i <= 100; ++i)
        cout << i << " / 2 is; " << (float)i / 2 << endl;
    return 0;
}

/* output

1 / 2 is; 0.5
2 / 2 is; 1
3 / 2 is; 1.5
4 / 2 is; 2
5 / 2 is; 2.5
6 / 2 is; 3
7 / 2 is; 3.5
8 / 2 is; 4
9 / 2 is; 4.5
10 / 2 is; 5

*/