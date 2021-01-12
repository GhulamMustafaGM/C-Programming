// Prime factorization

#include <iostream>
using namespace std;

/* Input a number to get it's prime factorisation*/

int prime(long a)
{
    long n = 2, code = 1;
    while (n <= a / 2)
    {
        if (a % n == 0)
        {
            code = 0;
            break;
        }
        n++;
    }
    return code; // if the number is prime it returns 1
}

int main()
{
    long x, n = 2, code;
    cin >> x;
    cout << x << "=" << endl;

    if (x == 1 || x == 0)
    {
        cout << "enter correct input";
    }
    if (x < 0)
    {
        x = -x;
        cout << -1 << "x"
             << "    (-1 is not  prime)" << endl;
    }

    while (n <= x)
    {
        code = prime(n);
        if (code == 1 && x % n == 0)
        {
            while (x % n == 0)
            {
                cout << "x" << n;
                x = x / n;
            }
        }
        n++;
    }
    cout << endl
         << endl
         << "Thanks for trying this code." << endl
         << "Hit like if you like it.";
    return 0;
}