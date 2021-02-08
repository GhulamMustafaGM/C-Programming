#include <iostream>

using namespace std;
int fibonacci(int n)
{
    if (n == 1 || n == 2)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    int n(0), i(1);
    cin >> n;
    cout << n << endl;
    do
    {
        cout << "u(" << i << ")=" << fibonacci(i) << endl;
        i++;
    } while (i <= n);
    return 0;
}
