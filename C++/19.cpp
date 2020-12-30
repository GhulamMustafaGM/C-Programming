/* C++ program - print table of number */
#include <iostream>
using namespace std;

int main()
{
    int num, i, tab;

    cout << "Enter a number:";
    cin >> num;

    cout << "Table of " << num << " is \n\n";
    for (i = 1; i <= 10; i++)
    {
        tab = num * i;

        cout << num << " * " << i << " = " << tab << "\n";
    }
    return 0;
}
/*output
Enter a number:5
Table of 5 is

5 * 1 = 5
5 * 2 = 10
5 * 3 = 15
5 * 4 = 20
5 * 5 = 25
5 * 6 = 30
5 * 7 = 35
5 * 8 = 40
5 * 9 = 45
5 * 10 = 50

*/