#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    if (argc != 2)
    {
        cout << "You forgot to type your name. \n";
        return 1;
    }
    cout << "Hello " << argv[1] << endl;
    return 0;
}

/* Output: 

You forgot to type your name.

*/
