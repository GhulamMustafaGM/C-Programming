// A simple C++ keyboard synopsis program.

#include <iostream>
#include <cstring>
using namespace std;

char *keyword[][2] = {
    "for", "for (initialization; condition; increment",
    "if", "if (condition) ... else ...",
    "switch", "switch(value) {case-list}",
    "while", "while(condition) ...",
    // add the rest of the C++ keywords here

    "", "" // terminate the list with nulls
};

int main()
{
    char str[80];

    int i;

    cout << "Enter keyword: ";
    cin >> str;

    // display syntax

    for (i = 0; *keyword[i][0]; i++)
        if (!strcmp(keyword[i][0], str))
            cout << keyword[i][1];
    return 0;
}

/* output:

Enter keyword: while
while(condition) ...
*/