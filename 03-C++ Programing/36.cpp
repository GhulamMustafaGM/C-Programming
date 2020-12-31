// Use static_cast

#include <iostream>
using namespace std;

int main()
{
    int i;
    float f;

    f = 199.22F;

    i = static_cast<int>(f);

    cout << i << endl;

    return 0;
}

/* Output::

199

*/
