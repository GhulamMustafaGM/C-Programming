// Pointers : possible ways to access value and location of veriable

#include <iostream>
using namespace std;

int main()
{
    int var = 50;
    int *p;
    p = &var;

    cout << p << endl;
    cout << &var << endl
         << endl;
    // Outputs hexadecimal: memory location of var variable

    cout << var << endl;
    cout << *p << endl;
    cout << *p << endl;
    cout << *&var << endl;
    // Outputs 50: the value of the var variable

    return 0;
}
