/* C++ Pattern program 9 */

#include <iostream>
using namespace std;

int main()
{
    int i, j;
    char ch = 'A';

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << ch << | " ";
        }
        cout << "\n";
        ch++;
    }
    return 0;
}
/*output 

A
B B
C C C
D D D D
E E E E E

*/