/* Storage class specifiers
	There are five storage class specifiers supported by C++.
	
	auto
	extern 
	register
	static
	mutable

*/

#include <iostream>
using namespace std;

int main()
{

    extern int first, last; // use global vars

    cout << first << " " << last << endl;

    return 0;
}

// global definition of first and last

int first = 10, last = 20;

/* output:

10 20

*/