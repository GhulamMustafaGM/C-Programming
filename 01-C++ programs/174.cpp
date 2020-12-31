#include <iostream>
using namespace std;

it find_substr(char *sub, char *str);

int main()
{
    int index;

    index = find_substr("three", "one two three four");

    cout << "Index of three is " << index; // index is 8

    return 0;
}

// Return index of substring or -1 if not found.

int find_substr(char *sub, char *str)
{
    int t;

    char *p, *p2;

    for (t = 0; str[t]; t++)
    {
        p = &str[t]; // reset pointers
        p2 = sub;

        while (*p2 && *p2 == *p)
        { check for substring 
			p++;
            p2++;
        }
        /* If at end of p2 (i.se., substring), then
		a match has been found. */

        if (!*p2)
            return t; // return index of match
    }
    return -1; // no match found
}

/* 

Index of three is 8

*/