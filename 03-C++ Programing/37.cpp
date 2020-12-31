// An example that uses reinterpret_cast.

#include <iostream>
using namespace std;

int main()
{
    int i;
    char *p = "This is a string";

    i = reinterpret_cast<int>(p); // cast pointer to integer

    cout << i;

    return 0;
}

/* Output: No output */