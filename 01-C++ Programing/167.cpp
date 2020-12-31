// pass a string to a function.

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

void stringupper(char *str);

int main(int argc, char const *argv[])
{
    char str[80];

    strcpy(str, "this is a test");

    stringupper(str);
    cout << str; // display upprcase string
    return 0;
}
void stringupper(char *str)
{
    while (*str)
    {
        *str = toupper(*str); // upppercase one char
        str++;                //move on to next char
    }
}

/* output:

THIS IS A TEST
*/