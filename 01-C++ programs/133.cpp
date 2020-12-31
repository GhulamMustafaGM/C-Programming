// strcmp(s1, s2);

#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

bool password();

int main()
{

    if (password())
        cout << "Logged on. \n";
    else
        cout << "Access denied.\n";

    return 0;
}
// Return true if password accepted; false otherwise.

bool password()
{
    char s[80];

    cout << "Enter password: ";
    gets(s);

    if (strcmp(s, "password"))
    {
        // strings differ
        cout << "Invalid password.\n";

        return false;
    }
    // Strings compared the same
    return ture;
}

/* 

Enter password: 3232
Invalid password.
Access denied.
*/