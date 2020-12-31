#include <iostream>
using namespace std;

// A try/catch is reset each time a functions is entered.

void Ehandler(int test)
{
    try
    {
        if (test)
            throw test;
    }
    catch (int i)
    {
        cout << "Caught one! Ex. #: " << i << endl;
    }
}
int main()
{
    cout << "Start \n";

    Xhandler(0);
    Xhandler(1);
    Xhandler(2);
    Xhandler(3);

    cout << endl;

    return 0;
}

/* Output:

Start
Caught one! Ex. #: 1
Caught one! Ex. #: 2
Caught one! Ex. #: 3
end

*/