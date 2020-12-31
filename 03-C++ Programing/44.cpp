/* Illustrate assigning function pointers to 
	overloaded functions. 
*/

#include <iostream>
using namespace std;

// Output count number of spaces.

void space(int count)
{
    for (; count; count--)
        cout << ' ';
}

// output count number of chs.

void space(int count, char ch)
{
    for (; count; count--)
        cout << ch;
}

int main()
{
    /* Create a pointer to void function with 
		one int parameter.
	*/
    void (*fp1)(int);

    /* Create a pointer to void vunction with 
		one int parameter and one character parameter.
	*/
    void (*fp2)(int, char);

    fp1 = space; // gets address of space(int)
    fp2 = space; // gets address of space(int, char)

    fp1(22); // ouput 22 spaces - same as (*fp2) (22)
    cout << "|\n";

    fp2(30, 'x'); // output 30 xs - same as (*fp2) (30, 'x')
    cout << "|\n";

    return 0;
}

/* output 

                      |
xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx|

*/