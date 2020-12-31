// strcmp()

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    char s[80];

    for (;;)
    {
        cout << "Enter a string: ";
        gets(s);

        if (!strcmp("quit", s))
            break;
    }
    return 0;
}

/*
Enter a string: Hello there
Enter a string: Here we go
Enter a string: quit
*/