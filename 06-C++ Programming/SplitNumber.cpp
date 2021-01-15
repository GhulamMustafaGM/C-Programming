// Split any Number

#include <iostream>
using namespace std;

int main()
{
    int x = 0;

    cin >> x;

    int length = 0;
    int y = x;
    int base = 10;

    do
    {
        ++length;
        y /= base;
    } while (y);

    int q = 1;
    for (int p = 1; p < length; p++)
        q = q * 10;

    for (int i = q; i > 0; i /= 10)
    {
        cout << x / i << "   ";
        x = x % i;
    }

    return 0;
}
