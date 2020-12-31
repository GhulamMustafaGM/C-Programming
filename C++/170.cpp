/* The program prints all command line arguement it is 
called with one character at a time. 
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int t, i;

    for (t = 0; t < argc; ++t)
    {
        i = 0;

        while (argv[t][i])
        {
            cout << argv[t][i];
            ++i;
        }
        cout << ' ';
    }
    return 0;
}

/* Output: 

D:\lnu project\book_practice\hs0152.exe

*/