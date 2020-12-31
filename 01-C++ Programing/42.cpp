/* C++ program - decemal to ocal conversion */

#include <iostream>
using namespace std;

int main()
{
    long int decnum, rem, quot;

    int i = 1, j, octnum[100];

    cout << "\nEnter any decimal number: ";
    cin >> decnum;
    quot = decnum;

    while (quot != 0)
    {
        octnum[i++] = quot % 8;
        quot = quot / 8;
    }
    cout << "Equivalent octal value of " << decnum << " is: \n";

    for (j = i - 1; j > 0; j--)
    {
        cout << octnum[j];
    }
    cout << endl;

    return 0;
}
/*output 
Enter any decimal number: 50
Equivalent octal value of 50 is:
62
*/