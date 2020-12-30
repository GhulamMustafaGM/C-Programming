/* C++ pattern program 4 */

#include <iostream>
using namespace std;

int main()
{
    int i, j, k = 16, tim = 1;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < k; j++)
        {
            cout << " ";
        }
        k = k - 4;
        for (j = 0; j < tim; j++)
        {
            cout << "* ";
        }
        tim = tim + 2;
        cout << endl;
    }
    return 0;
}
/*output 

                *
			* * *
		* * * * *
	* * * * * * *
* * * * * * * * *

*/