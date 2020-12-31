/* Strings: using cin to read a string from the keyboard. */

#include <iostream>
using namespace std;

int main()
{
    char str[80];

    cout << "Enter a string: ";
    cin >> str; // read string from keyboard

    cout << "Here is your string: ";
    cout << str << endl;

    return 0;
}

/*
Enter a string: This is a test
Here is your string: This
*/