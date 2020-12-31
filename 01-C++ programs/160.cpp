#include <iostream>
using namespace std;

int main()
{
    // i is local to for

    for (int i = 0; i < 10; i++)
    {
        cout << i << " ";
        cout << "Squared is " << i * i << endl;
    }
    // i = 10; // **** Error *** --  i not known here!

    return 0;
}

/* output: 

0 Squared is 0
1 Squared is 1
2 Squared is 4
3 Squared is 9
4 Squared is 16
5 Squared is 25
6 Squared is 36
7 Squared is 49
8 Squared is 64
9 Squared is 81

*/