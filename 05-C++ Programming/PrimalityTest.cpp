// Primality Test

#include <iostream>
#include <cmath>
using namespace std;

/*
    "x" is a prime number.
    "n" is an integer.
    
    0 < n < x
    n^x mod x = n
    
    Fermat's little theorem.
*/

int main()
{
    unsigned long long x = 13;

    for (unsigned long long n = 1; n < x; ++n)
    {
        if ((unsigned long long)powl(n, x) % x != n)
        {
            cout << "It isn't a prime number." << endl;
            return 1;
        }
    }

    cout << "It is a prime number...?" << endl;
    return 0;
}