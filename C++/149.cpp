
// Indexing a pointer like an array.

#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char str[20] = "hello tom";
    char *p;

    int i;

    p = str; // put addess of str into p

    // now, index p like an array

    for (i = 0; p[i]; i++)
        p[i] = toupper(p[i]);

    cout << p << endl; // display the string

    return 0;
}

/* output:

HELLO TOM

*/