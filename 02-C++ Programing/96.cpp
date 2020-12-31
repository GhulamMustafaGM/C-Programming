/* 	The exit() and abor() functions are provided by the c++
	library. The exit() function requires the 
	header <cstdlib>.

	void exit(int status);

*/

// This example will not work.
#include <iostream>
using namespace std;

int main()
{
    cout << "start\n";

    try
    { // start a try block

        cout << "Inside try block\n";
        throw 99; // throw an error
        cout << "This will not exectue ";
    }
    catch (double i)
    { // won't work for an int exception
        cout << "Caught an exception -- value is: ";
        cout << i << endl;
    }
    cout << "endl";

    return 0;
}

/* 

start
Inside try block
terminate called after throwing an instance of 'int'

*/