#include <iostream>
using namespace std;

int main()
{
    // declare a char pointer, string is an array of chars
    char *p = "abcde";
    // pointer points at first char 'a', print and increase
    // the pointer to the second char 'b'
    cout << *p++ << endl;
    // print 'b', increase to the third char 'c'
    cout << *p++ << endl;
    // print out third char 'c'
    cout << *p;
    return 0;
}

/* ouput:

a
b
c

*/