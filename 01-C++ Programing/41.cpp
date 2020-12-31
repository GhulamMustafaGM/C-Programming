/*C++ program - decimal to binary conversion */

#include <iostream>
using namespace std;

int main()
{
    long int decnum, rem, quot;
    int binnum[100], i = 1, j;

    cout << "Enter any decimal number :";
    cin >> decnum;
    quot = decnum;

    while (quot != 0)
    {
        binnum[i++] = quot % 2;
        quot = quot / 2;
    }
    cout << "Equivalent binary value of " << decnum << " :\n";
    for (j = i - 1; j > 0; j--)
    {
        cout << binnum[j];
    }

    return 0;
}
/*output 
Enter any decimal number :20
Equivalent binary value of 20 :
10100

*/