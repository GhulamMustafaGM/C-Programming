// this program prints the alphabet in reverse order.

#include <iostream>

using namespace std;

int main()

{
    char letter;

    for (letter = 'Z'; letter >= 'A'; letter--)
        cout << letter;
    return 0;
}

/* output

ZYXWVUTSRQPONMLKJIHGFEDCBA

*/