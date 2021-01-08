// Fibbonaci series by recusion

#include <iostream>

int fib(int);

using namespace std;

int main()
{
    int i, n;
    cin >> n;
    cout << "Fibbonaci series: \n";
    for (i = 0; i < n; i++)
    {
        cout << fib(i);
        cout << "\n";
    }
    return 0;
}

int fib(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return (fib(n - 2) + fib(n - 1));
}