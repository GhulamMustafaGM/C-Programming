// const references cannot be modified.

#include <iostream>
using namespace std;

void f(const int &i);
int main()
{
    int k = 10;
    f(k);
    return 0;
}

// Use a const reference parameter.

void f(const int &i)
{
    i = 100; // Error, can't modify a const reference.
    cout << i;
}

/* 

*** Error ***

*/