// Simple recursion

#include <iostream>
using namespace std;
int fun(int x)
{
    if (x == 0)
        return 0;
    else if ((x % 10) % 2 == 0)
        return (1 + fun(x / 10));
    return (fun(x / 10));
}
int main()
{
    int n;
    cin >> n;
    cout << fun(n);
    return 0;
}