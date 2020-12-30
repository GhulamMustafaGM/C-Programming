/* C++ pattern program 2 */
#include <iostream>
using namespace std;

int main()
{
    int i, j, k = 1;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < k; j++)
        {
            cout << "* ";
        }
        k = k + 2;
        cout << "\n";
    }
    return 0;
}
/* output 
*
* * *
* * * * *
* * * * * * *
* * * * * * * * *

*/