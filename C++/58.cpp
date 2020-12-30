
/*C++ pattern program 6 */
#include <iostream>
using namespace std;

int main()
{
    int i, j, num = 1;

    for (i = 0; i < 5; i++)
    {
        num = 1;
        for (j = 0; j <= i; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << "\n";
    }
    return 0;
}
/*output 
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

*/