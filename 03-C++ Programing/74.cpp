// Demonstrate insert(), erase(), and replace().

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1("This is a test");
    string str2("ABCDEFG");
    cout << "Initial strings:\n";
    cout << "str1: " << str1 << endl;
    cout << "str2: " << str2 << "\n\n";
    // demonstrate insert()
    cout << "Insert str2 into str1:\n";
    str1.insert(5, str2);
    cout << str1 << "\n\n";
    // demonstrate erase()
    cout << "Remove 7 characters from str1:\n";
    str1.erase(5, 7);
    cout << str1 << "\n\n";
    // demonstrate replace
    cout << "Replace 2 characters in str1 with str2:\n";
    str1.replace(5, 2, str2);
    cout << str1 << endl;
    return 0;
}

/* output 

nitial strings:
str1: This is a test
str2: ABCDEFG

Insert str2 into str1:
This ABCDEFGis a test

Remove 7 characters from str1:
This is a test

Replace 2 characters in str1 with str2:
This ABCDEFG a test

*/