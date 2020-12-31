/*C++ pattern program 10 */

#include <iostream>
using namespace std;

int main()
{
    int i, j;

    for (i = 0; i < 5; i++)
    {
        for (j = 5; j > i; j--)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}
/*output 

* * * * *
* * * *
* * *
* *
*