/* C++ pattern progrma 11 */
#include <iostream>
using namespace std;

int main()
{
    int i, j, num = 1;

    for (i = 0; i < 5; i++)
    {
        for (j = 5; j > i; j--)
        {
            cout << num << " ";
            num++;
        }
        cout << "\n";
        num = 1;
    }
    return 0;
}
/*output

1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

*/