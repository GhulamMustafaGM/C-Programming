// Find perfect number

#include <iostream>
using namespace std;

void perfect(int n)
{
    int sum = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (n == sum)
        cout << n << " is a Perfect number";
    else
        cout << n << " is not a Perfect number";
}
int main()
{
    int n;
    cin >> n;
    perfect(n);
    return 0;
}
