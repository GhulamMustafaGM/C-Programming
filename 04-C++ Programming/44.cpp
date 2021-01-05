// Const Pointer Program

#include <iostream>
using namespace std;

int main()
{
    int var = 56;
    int const *p_const = &var; //*p is a const
                               // *p_const=*p_const+1;//invalid
    cout << *p_const << endl;

    const int const_var = 100;
    p_const = &const_var; //valid?  yes
    cout << *p_const << endl;
    int *p_change;

    // p_change=&const_var;//invalid
    p_change = &var; //valid
    cout << *p_change;
    return 0;
}

/* output

56
100
56

*/