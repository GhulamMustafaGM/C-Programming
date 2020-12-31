#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << setprecision(2) << 1000.243 << endl;
    cout << setw(20) << "Hello there. ";

    return 0;
}

/* Output: 

1e+003
       Hello there.

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << setiosflags(ios::showpos);
    cout << setiosflags(ios::scientific);
    cout << 123 << " " << 123.23;
    cout << endl;

    return 0;
}

/* Output:

+123 +1.232300e+002

*/