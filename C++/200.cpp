// Uppercase letters.

#include <iostream>
using namespace std;

int main()
{
    char ch;
    do
    {
        cin >> ch;

        // This statement turns off the 6th bit.

        ch = ch & 223; // ch is now uppercase
        cout << ch;
    } while (ch != 'Q');
    return 0;
}

/* 

No output.

*/