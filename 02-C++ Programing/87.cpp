// Using standard parameters in a template function.

#include <iostream>
using namespace std;

// Display data specified number of times.
template <class X>
void repeat(X data, int times)
{
    do
    {
        cout << data << endl;
        times--;
    } while (times);
}

int main()
{
    repeat("This is a test", 3);
    repeat(100, 5);
    repeat(99.0 / 2, 4);

    return 0;
}

/* Output:

This is a test
This is a test
This is a test
100
100
100
100
100
49.5
49.5
49.5
49.5

*/