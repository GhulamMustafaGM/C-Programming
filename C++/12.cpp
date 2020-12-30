/* C++ program - check original equal reverse or not */

#include <iostream>
using namespace std;

int main()
{
    int num, orig, rev = 0, rem;

    cout << "\nEnter a number:";
    cin >> num;

    orig = num;

    while (num > 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    if (orig == rev)
    {
        cout << "Reverse is equal to original" << endl;
    }
    else
    {
        cout << "Reverse is not equal to original" << endl;
    }

    return 0;
}
/*ouput


Enter a number:12321
Reverse is equal to original

Enter a number:1232
Reverse is not equal to original

*/