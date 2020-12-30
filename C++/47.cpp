/* C++ Program - Octal to decimal conversion */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long int octnum, decnum = 0;
    int i = 0;

    cout << "\nEnter any octal number :";
    cin >> octnum;

    while (octnum != 0)
    {
        decnum = decnum + (octnum % 10) * pow(8, i);
        i++;
        octnum = octnum / 10;
    }
    cout << "Equivalent decimal value = " << decnum;
    return 0;
}
/*output
Enter any octal number :346
Equivalent decimal value = 230
*/