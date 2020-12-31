// The use of all four string functions.

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()

{
    char s1[80], s2[80];

    cout << "Enter two strings: ";

    gets(s1), gets(s2);

    cout << "Lengths: " << strlen(s1);
    cout << ' ' << strlen(s2) << endl;

    if (!strcmp(s1, s2))
        cout << "The strings are equal ";

    else
        cout << "not equal \n";

    strcat(s1, s2);
    cout << s1 << endl;

    strcpy(s1, s2);
    cout << s1 << " and " << s2 << ' ';
    cout << "are now the same\n";

    return 0;
}

/* 

Enter two strings: hello
there
Lengths: 5 5
not equal
hellothere
there and there are now the same

*/