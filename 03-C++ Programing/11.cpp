// Using setf() to turn o both the showpos and scientfic flags

#include <iostream>
using namespace std;

int main()
{
    cout.setf(ios::showpos);
    cout.setf(ios::scientific);
    cout << 123 << " " << 123.23 << " ";

    return 0;
}

/* Output:

+123 +1.232300e+002

*/