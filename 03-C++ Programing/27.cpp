// a simple example that uses typeid.

#include <iostream>
#include <typeinfo>
using namespace std;

class myclass
{
    // ...
};

int main()
{
    int i, j;
    float f;
    myclass obj;

    cout << "The type of i is: " << typeid(i).name();
    cout << endl;

    cout << "The type of f is: " << typeid(f).name();
    cout << endl;

    cout << "The type of obj is: " << typeid(obj).name();
    cout << endl;
    cout << endl;

    if (typeid(i) == typeid(j))
        cout << "The type of i and j are the same\n";

    if (typeid(i) != typeid(f))
        cout << "The types of i and f are not the same\n";
    return 0;
}

/* Output:

The type of i is: int
The type of f is: float
The type of ob is: class myclass

The type of i and j are the same
The types of i and f are not the same

*/