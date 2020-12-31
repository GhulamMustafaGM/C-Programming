/* c++ program - check vowel or not */
#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Enter an alphabet: ";
    cin >> ch;

    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' ||
        ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' ||
        ch == 'u' || ch == 'U')
    {
        cout << "This is a vowel" << endl;
    }
    else
    {
        cout << "This is not a vowel" << endl;
    }
    return 0;
}
/*output
Enter an alphabet: e
This is a vowel

Enter an alphabet: d
This is not a vowel
*/