/* Some String Library Functions

	strcpy()
	strcat()
	strlen()
	strcmp() 

	will be used as header <cstring> 

 */

// strcpy (to, from);

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[80];

    strcpy(str, "hello");
    cout << str << endl;
    return 0;
}

/* 
Hello
*/