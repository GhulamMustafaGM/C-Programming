
#include <iostream>
using namespace std;

int main()
{
    int *p;
    p = new int(99); // initialize with 99
    cout << *p;      // displays 99
    delete p;

    return 0;
}

/* output:

99

*/