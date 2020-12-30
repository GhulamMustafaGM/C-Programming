/* C++ program - check alphabet or not */
#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout << "\nEnter a character: ";
    cin >> ch;

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        cout << ch << " is an alphabet" << endl;
    }
    else
    {
        cout << ch << " is not alphabet" << endl;
    }

    return 0;
}
/* ouput
Enter a character: a
a is an alphabet

Enter a character: 3
3 is not alphabet
*/