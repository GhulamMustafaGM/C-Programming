// limits

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    cout << "short is " << sizeof(short) << " bytes." << endl;
    cout << "int is " << sizeof(int) << " bytes." << endl;
    cout << "long is " << sizeof(long) << " bytes." << endl
         << endl;

    cout << "Maxinum values:" << endl;
    cout << "short: " << SHRT_MAX << endl;
    cout << "int: " << INT_MAX << endl;
    cout << "long: " << LONG_MAX << endl
         << endl;

    int x; //What could it be?
    cout << "x = " << x;
    return 0;
}
