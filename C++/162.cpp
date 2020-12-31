// Pass a pointer to a funciton.

#include <iostream>
using namespace std;

void f(int *j);

int main(int argc, char const *argv[])
{
    int i;
    int *p;

    p = &i; // p now points to i

    f(p);

    cout << i; // i is now 100

    return 0;
}

void f(int *j)
{
    *j = 100; // var pointed to by j is assigned 100
}

/* Output: 
100

*/