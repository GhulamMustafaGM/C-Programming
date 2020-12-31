// A simple exception handling example.

#include <iostream>
using namespace std;

int main()
{
    cout << "Start\n";

    try
    { // start a try block
        cout << "Inside try block\n";
        throw 99; // throw an error
        cout << "This will not execute";
    }
    catch (int i)
    { // catch an error
        cout << "Caught an exception --value is: ";
        cout << i << endl;
    }
    cout << "end";

    return 0;
}

/* Output: 

Start
Inside try block
Caught an exception --value is: 99
end

*/