// This progrma is correct.

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    char s[80];
    cha *p1;

    do
    {
        p1 = s; // reset p1 each time through the loop

        cout << "Enter a string: ";
        gets(p1); // read a string

        // print the ASCII values of each character

        while (*p1)
            cout << (int)*p1++ << ' ';
        cout << endl;
    } while (strcmp(s, "done"));
    return 0;
}

/* 

Enter a string: ghulam
103 104 117 108 97 109
Enter a string: print
112 114 105 110 116 32
Enter a string:

*/