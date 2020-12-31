// Demonstrate an anonymous union.

#include <iostream>
using namespace std;

int main()
{
    // this is an anonymous union
    union
    {
        short int count;
        char ch[2];
    };

    // Here, refer to union members directly

    ch[0] = 'X';
    ch[1] = 'Y';
    cout << "union as chars: " << ch[0] << ch[1] << '\n';
    cout << "union as integer: " << count << '\n';

    return 0;
}

/* output:

union as chars: XY
union as integer: 22872

*/