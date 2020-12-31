/* Unsized array initializations */

// Enter and display strings.

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int t, i;

    char text[100][80];

    for (t = 0; t < 100; t++)
    {
        cout << t << ": ";
        gets(text[t]);

        if (!text[t][0])
            break; // quit on blank line
    }
    // redisplay the strings

    for (i = 0; i < t; i++)
        cout << text[i] << '\n';
    return 0;
}

/* output:
0: 1
1: 2
2: 3
3: 4
4:
1
2
3
4

*/