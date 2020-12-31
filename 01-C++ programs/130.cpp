// using gets() to read a string from the keyboard

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    char str[80];

    cout << "Enter a string: ";
    gets(str); // rad a strin gform the keyboard

    cout << "Here is your string: ";
    cout << str << endl;

    return 0;
}

/*
Enter a string: This is a test.
Here is your string: This is a test.

*/