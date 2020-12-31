// This example uses cathc(...) as default.

#include <iostream>
using namespace std;

void Xhandler(int test)
{
    try
    {
        if (test == 0)
            throw test; // throw test
        if (test == 1)
            throw 'a'; // throw char
        if (test == 2)
            throw 123.23; // throw double
    }
    catch (int i)
    { // catch an int exception
        cout << "Caught " << i << endl;
    }
    catch (...)
    { // catch all other exceptions
        cout << "Caught one!\n";
    }
}
int main()
{
    cout << "start\n";

    Xhandler(0);
    Xhandler(1);
    Xhandler(2);

    cout << "end";
    cout << endl;

    return 0;
}

/* Output:

start
Caught 0
Caught one!
Caught one!
end

*/