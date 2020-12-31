// Demonstrate a friend function

#include <iostream>
using namespace std;

class myclass
{
    int a, b;

public:
    myclass(int i, int j)
    {
        a = i;
        b = j;
    }

    friend int sum(myclass x); // sum() is a friend of myclass
};

// Note: sum() is not a member function of any class.

int sum(myclass x)
{
    /* Becuase sum() is a friend of myclass, it can 
		directly access a and b. */

    return x.a + x.b;
}

int main()
{
    myclass n(3, 4);

    cout << sum(n);

    return 0;
}

/* output: 

7

*/