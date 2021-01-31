#include <iostream>
using namespace std;

void abundant(int n)
{
    int i, s = 0;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            s += i;
        }
    }
    if (2 * n < s)
    {
        cout << n << " is abundant";
    }
    else
    {
        cout << n << " is deficient";
    }
}
int main()
{
    int n;
    cin >> n;
    abundant(n);
    return 0;
}
