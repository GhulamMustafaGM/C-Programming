#include <iostream>
using namespace std;

void code(const char *str);

int main()
{
    code("this is a test");
    return 0;
}
/* Use of const ensures str cannot modify the
argument to which it points. */

void code(const char *str)
{
    while (*str)
    {
        cout << (char)(*str + 1);
        str++;
    }
}

/* output:

uijt!jt!b!uftu

*/