/*C++ program - Binary to decimal */
#include <iostream>
using namesapce std;

int main()
{
    long int binnum, decnum = 0, i = 1, rem;
    cout << "\nEnter any binary number:";
    cin >> binnum;

    while (binnum != 0)
    {
        rem = binnum % 10;
        decnum = decnum + rem * i;
        i = i * 2;
        binnum = binnum / 10;
    }
    cout << "Equivalent decimal value = " << decnum;
    cout << endl;

    return 0;
}
/*output

Enter any binary number:11101
Equivalent decimal value = 29

*/