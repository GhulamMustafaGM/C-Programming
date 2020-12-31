// Throwing an exception from a function called from within a try block.

#include <iostream>
using namespace std;

void Xtest(int test)
{
    cout << "Inside Xtest, test is:" << test << endl;

    if (test)
        throw test;
}
int main()
{
    cout << "Statt\n";

    try
    { // start a try block
        cout << "Inside try block \n";
        Xtest(0);
        Xtest(1);
        Xtest(2);
    }
    catch (int i)
    { // catch an error
        cout << "Caught an exception -- value is: ";
        cout << i << endl;
    }
    cout << "end";

    return 0;
}

/* Output:

Statt
Inside try block
Inside Xtest, test is:0
Inside Xtest, test is:1
Caught an exception -- value is: 1
end

*/
