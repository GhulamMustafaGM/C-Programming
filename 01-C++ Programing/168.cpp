// A custom version of strlen().

#include <iostream>
using namespace std;

int mystrlen(char *str);

int main()
{
    cout << "Length of hello There is: ";
    cout << mystrlen("Hello There");

    return 0;
}

int mystrlen(char *str)

{
    int i;

    for (i = 0; str[i]; i++); // find th end of the string

    return i;
}

/* Output: 

Length of hello There is: 11

*/