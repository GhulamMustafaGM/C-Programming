// Calling functions with arrays

#include <iostream>
using namespace std;

void display(int num[10]);
void main()
{
    int t[10], i;

    for (i = 0; i < 10; ++i)
        t[i] = i;

    display(t); // pass array t to a function

    return 0;
}

// print some numbers.
void display(int num[10])
{
    int i;

    for (i = 0; i < 10; i++)
        cout << num[i] << endl;
}

/* output:

0
1
2
3
4
5
6
7
8
9

*/