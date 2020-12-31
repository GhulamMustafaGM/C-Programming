/* Three operators are arithmetic, relational and logical */

#include <iostream>
using namespace std;

int main()
{
    int x, y;

    x = 10;
    y = 3;

    cout << x / y; // will display 3
    cout << "\n";
    cout << x % y; // will display 1, the remainder of the integer division

    cout << endl;

    x = 1;
    y = 2;

    cout << x / y << " " << x % y; // will display 0 1

    return 0;
}

/* output:

3
1
0 1

*/