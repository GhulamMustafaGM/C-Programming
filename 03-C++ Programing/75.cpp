// Demonstrate find() funtion

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i;
    string s1 =
        "The string class makes string handling easy.";
    string s2;
    i = s1.find("class");
    if (i != string::npos)
    {
        cout << "Match found at " << i << endl;
        cout << "Remaining string is: ";
        s2.assign(s1, i, s1.size());
        cout << s2;
    }
    return 0;
}

/* output 

Match found at 11
Remaining string is: class makes string handling easy.

*/