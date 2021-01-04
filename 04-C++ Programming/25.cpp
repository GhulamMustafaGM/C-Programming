// Factorial of number

#include <iostream>
using namespace std;

int main()
{
    unsigned long long i, n, j = 1;

    cin >> n;

    for (i = 1; i <= n; i++)
    {
        j *= i;
    }

    cout << n << "! =" << j << endl;

    return 0;
}

//maximum input that can calculate is 65

/* Output:

4
4! =24

*/