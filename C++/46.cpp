
/* C++ program - binary to hexadecimal */
#include <iostream>
using namespace std;

int main()
{
    long int binnum, rem, quot;
    int i = 1, j, temp;
    char hexdecnum[100];

    cout << "\nEnter any binary number: ";
    cin >> binnum;
    quot = binnum;

    while (quot != 0)
    {
        temp = quot % 16;
        //to convert integer tinto character
        if (temp < 10)
        {
            temp = temp = 48;
        }
        else
        {
            temp = temp + 55;
        }
        hexdecnum[i++] = temp;
        quot = quot / 16;
    }
    cout << "Equivalent hexadecimal value of " << binnum << " is: ";
    cout << endl;
    for (j = i - 1; j > 0; j--)
    {
        cout << hexdecnum[j];
    }
    cout << endl;
    return 0;
}
/*output
Enter any binary number: 1101
Equivalent hexadecimal value of 1101 is:
44D

*/