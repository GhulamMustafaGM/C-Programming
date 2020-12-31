// Tokens program: pointer version.

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    char str[80];
    char token[80];
    char *p, *q;

    cout << "Enter a sentence: ";
    gets(str);

    p = str;

    // Read a token at at time from the string.

    while (*p)
    {
        q = token; // set q pointing to start to token

        /* read characters until either a space or the null
		terminator is encountered. 
		*/

        while (*p != ' ' && *p)
        {
            *q = *p;
            q++;
            p++;
        }
        if (*p)
            p++;   // advance past the space
        *q = '\0'; // null terminate the token

        cout << token << endl;
    }
    return 0;
}

/* output:

Enter a sentence: ghulam
ghulam

*/