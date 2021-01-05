// Use cctype program 

#include <iostream>
#include <cctype>
using namespace std;
char get_char();
int main()
{
    char ch = get_char();
    if (isalpha(ch))
    {
        if (islower(ch))
            cout << ch << " is a lower letter" << endl;
        else
            cout << ch << " is a upper letter";
    }
    else if (isdigit(ch))
        cout << ch << " is a digit" << endl;
    else if (ispunct(ch))
        cout << ch << " is a punct" << endl;
    else if (isblank(ch))
        cout << ch << " is a blank" << endl;
    else if (iscntrl(ch))
        cout << ch << " is a control" << endl;
    else if (isgraph(ch))
        cout << ch << " is a graph" << endl;
    else if (isspace(ch))
        cout << ch << " is a space" << endl;
    else
        cout << ch << " is other";
    return 0;
}

char get_char()
{
    char ch;

    cin >> ch;
    return ch;
}