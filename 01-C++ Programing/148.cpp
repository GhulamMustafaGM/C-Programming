// tokens program: array-indexing version.

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    char str[80];
    char token[80];
    int i, j;

    cout << "Enter a sentence: ";
    gets(str);

    // Read a token at a time form the string.

    for (i = 0;; i++)
    {

        /* Read characters until either a space or the 
		null terminator is encountered. 
		*/

        for (j = 0; str[i] != ' ' && str[i]; j++, i++)
            token[j] = str[i];

        token[j] = '\0'; // null terminate the token
        cout << token << endl;

        if (!str[i])
            break;
    }
    return 0;
}

/* output:

Enter a sentence: ghulam
ghulam

*/