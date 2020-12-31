/* C++ pattern program 14 
 * This C++ program prints the alphabet
 * patterns on the screen */

#include <iostream>
using namespace std;

int main()
{
    int i, j, incr = 1;
    char ch = 'A';

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < incr; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << "\n";
        incr = incr + 2;
    }
    return 0;
}

/*output

A
B C D
E F G H I
J K L M N O P
Q R S T U V W X Y

*/