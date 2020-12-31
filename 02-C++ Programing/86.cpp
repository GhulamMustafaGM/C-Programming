
// Use the newer-style specialization syntax.

template <>
void swapargs<int>(int &a, int &b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;

    cout << "Inside swapargs int specialization.\n";
}

// Overload a function template declaraton.
#include <iostream>
using namespace std;

// first version of f() template.

template <class X>
void f(X a)
{
    cout << "Inside f(X a) \n";
}

// Second version of f() template.

template <class X, class Y>
void f(X a, Y b)
{
    cout << "Inside f(X a, Y b) \n";
}

int main()
{
    f(10);     // calls f(X)
    f(10, 20); // calls f(X, Y)

    return 0;
}

/* Output:

Inside f(X a)
Inside f(X a, Y b)

*/