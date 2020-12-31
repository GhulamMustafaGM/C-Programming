/* This program illustrates how variables can be 
local to a block.
*/

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int choice;

    cout << "(1) add numbers or ";
    cout << "(2) concatenate strings?: ";

    cin >> choice;

    if (choice == 1)
    {
        int a, b; // activate two integer vars

        cout << "Enter two numbers: ";
        cin >> a >> b;

        cout << "Sum is " << a + b << endl;
    }
    else
    {
        char s1[80]; // activate two strings

        cout << "Enter two strings: ";
        cin >> s1;
        cin >> s2;

        strcat(s1, s2);
        cout << "Concatenation is " << s1 << endl;
    }
    return 0;
}

/* 

(1) add numbers or (2) concatenate strings?: 1
Enter two numbers: 33 22
Sum is 55

*/