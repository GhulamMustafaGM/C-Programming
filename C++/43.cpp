/*C++ program - decimal to hexadecimal conversion  */
#include <iostream>
using namespace std;

int main()
{
    long int decnum, rem, quot;
    int i = 1, j, temp;
    char hexdecnum[100];

    cout << "\nEnter any decimal number:";
    cin >> decnum;
    quot = decnum;

    while (quot != 0)
    {
        temp = quot % 16;
        // to convert intege into character
        if (temp < 10)
        {
            temp = temp + 48;
        }
        else
        {
            temp = temp + 55;
        }
        hexdecnum[i++] = temp;
        quot = quot / 16;
    }
    cout << "Equvialent hexadecimal value of " << decnum << " is :\n";
    for (j = i - 1; j > 0; j--)
    {
        cout << hexdecnum[j];
    }
    return 0;
}
/*output
Enter any decimal number:45
Equvialent hexadecimal value of 45 is :
2D
*/