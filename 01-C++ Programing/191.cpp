// Another ambiguity error.

#include <iostream>
using namespace std;

char myfunc(unsigned char ch);
char myfunc(char ch);
int main()
{
    cout << myfunc('c');       // this calls myfunc(char)
    cout << myfunc(88) << " "; // ambiguous
    return 0;
}
char myfunc(unsigned char ch)
{
    return ch - 1;
}

char myfunc(char ch)
{
    return ch + 1;
}

/* 

*** Error ***

*/