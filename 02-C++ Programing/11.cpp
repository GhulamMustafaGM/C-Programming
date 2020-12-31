// Demonstrate a reference to a structure.

#include <iostream>
using namespace std;

struct mystruct
{
    int a;
    int b;
};

mystruct &f(mystruct &var);

int main()
{
    mystruct x, y;
    x.a = 10;
    x.b = 20;
    cout << "Original x.a and x.b: ";
    cout << x.a << ' ' << x.b << '\n';
    y = f(x);

    cout << "Modified x.a and x.b: ";
    cout << x.a << ' ' << x.b << '\n';
    cout << "Modified y.a and y.b: ";
    cout << y.a << ' ' << y.b << '\n';

    return 0;
}
// Receive and return a reference to a structure.
mystruct &f(mystruct &var)
{
    var.a = var.a * var.a;
    var.b = var.b / var.b;

    return var;
}

/* output:

Original x.a and x.b: 10 20
Modified x.a and x.b: 100 1
Modified y.a and y.b: 100 1

*/