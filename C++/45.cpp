/* C++ Program - Binary to octal */
#include <iostream>
using namespace std;

int main()
{
    long int binnum, rem, quot;
    int octnum[100], i = 1, j;

    cout << "\nEnter any binary number:";
    cin >> binnum;
    quot = binnum;
    while (quot != 0)
    {
        octnum[i++] = quot % 8;
        quot = quot / 8;
    }
    cout << "Equivalent octal value of " << binnum << " : " << endl;
    for (j = i - 1; j > 0; j--)
    {
        cout << octnum[j];
    }
    return 0;
}

/*output
Enter any binary number:11
Equivalent octal value of 11 :
13
*/