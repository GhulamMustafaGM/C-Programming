
// Within the scope of the inner block.

#include <iostream>
using namespace std;

int main()
{
    int i, j;

    i = 10;
    j = 100;

    if (j > 0)
    {
        int i; // this i is separate from outer i

        i = j / 2;

        cout << "inner i: " << i << endl;
    }
    cout << "Outer i: " << i << endl;

    return 0;
}

/* 

inner i: 50
Outer i: 10

*/