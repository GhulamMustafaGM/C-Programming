// Pass a structure to a function.

#include <iostream>

// define a structure type

struct sample
{
    int a;
    char ch;
};

void f1(sample parm);

int main()

{
    struct sample arg; // declare arg

    arg.a = 1000;
    arg.ch = 'X';

    f1(arg);

    return 0;
}

void f1(sample parm)
{
    cout << parm.a << " " << parm.ch << endl;
}

/* output:

1000 X

*/