// Composite number

#include <iostream>
using namespace std;
bool check(int n)
{
    int i, d = 0;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            d++;
        }
    }
    if (d > 2)
        return true;
    else
        return false;
}
int main()
{
    int x;
    bool y;
    cout << "Composite number b/w 1 to 100 are:" << endl;
    for (x = 1; x <= 100; x++)
    {
        y = check(x);
        if (y == true)
        {
            cout << x << endl;
        }
    }
    return 0;
}