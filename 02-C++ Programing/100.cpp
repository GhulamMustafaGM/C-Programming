// Using multiple catch statements

#include <iostream>
using namespace std;

// Different types of exceptions can be caught.

void Xhandler(int test)
{
    try
    {
        if (test)
            throw test;
        else
            throw "Value is zero";
    }
    catch (int i)
    {
        cout << "Caught one! Ex. #. " << i << '\n';
    }
    catch (char *str)
    {
        cout << "Caught a string: ";
        cout << str << '\n';
    }
}

int main()
{
    cout << "start \n";

    Xhandler(1);
    Xhandler(2);
    Xhandler(0);
    Xhandler(3);

    cout << "end";

    return 0;
}

/* Output:

start
Caught One! Ex. #: 1
Caught One! Ex. #: 2
terminate called after throwing an instance of 'char const*'

*/