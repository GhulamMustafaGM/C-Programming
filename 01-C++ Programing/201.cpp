// Lowercase letters.

#include <iostream>
using namespace std;
int main()
{
    char ch;
    do
    {
        cin >> ch;
        /* This lowercases the letter by turning
on bit 6.
*/
        ch = ch | 32;
        cout << ch;
    } while (ch != 'q');
    return 0;
}

/* 

No output.

*/