#include <iostream>
using namespace std;

void clrscr(int size = 5);

int main()
{
    int i;
    for (i = 0; i < 10; i++)
        cout << i << '\n';

    clrscr(); // clears 10 lines
    for (i = 0; i < 10; i++)
        cout << i << '\n';
    clrscr(10); // clears 10 lines
    return 0;
}
void clrscr(int size)
{
    for (; size; size--)
        cout << '\n';
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
