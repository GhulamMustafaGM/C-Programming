// A short string demonstration.
/*
 Because string is a container, it also supports the common container
 functions, such as begin(), end(), size().
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1("The string class gives ");
    string str2("C++ high-powered string handling.");
    string str3;

    // assign a string
    str3 = str1;
    cout << str1 << "\n"
         << str3 << "\n";

    // concatenate two strings
    str3 = str1 + str2;
    cout << str3 << "\n";

    // compare strings
    if (str3 > str1)
        cout << "str3 > str1\n";
    if (str3 == str1 + str2)
        cout << "str3 == str1+str2\n";

    /* A string object can also be
	assigned a normal string. */
    str1 = "This is a null-terminated string.\n";
    cout << str1;

    // create a string object using another string object
    string str4(str1);
    cout << str4;

    // input a string
    cout << "Enter a string: ";
    cin >> str4;
    cout << str4;

    return 0;
}

/* output 

The string class gives
The string class gives
The string class gives C++ high-powered string handling.
str3 > str1
str3 == str1+str2
This is a null-terminated string.
This is a null-terminated string.
Enter a string: Hello
Hello

*/