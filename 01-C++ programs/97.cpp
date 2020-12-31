/* The Basic Data Type */

// Local Variables

#include <iostream>
using namespace std;

void func();

int main()

{
    int x; // local to main()

    x = 10;

    func();

    cout << "\n";
    cout << x; // displays 10

    return 0;
}

void func()
{
    int x; // local to func()

    x = -199;
    cout << x; // displays -199
}

/* output:

-199
10

*/