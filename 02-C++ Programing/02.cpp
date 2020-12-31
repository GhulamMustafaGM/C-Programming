#include <iostream>
using namespace std;

int main()
{

    int *p;
    p = new int; // allocate memory for int
    *p = 20;     // assign that memory the value 20
    cout << *p;  // prove that it works by displaying value
    delete p;    // free the memory

    return 0;
}

/* output:

20

*/