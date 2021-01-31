// armstrong

#include <iostream>
using namespace std;

int main()
{
    int n, x, y, z, i, cube;
    cout << "Enter a number " << endl;
    cin >> n;
    x = n % 10;
    y = n / 100;
    i = n / 10;
    z = i % 10;
    cube = (x * x * x) + (y * y * y) + (z * z * z);
    if (cube == n)
    {
        cout << n << " is an armstrong number";
    }
    else
    {
        cout << n << "is not an armstrong number";
    }
    return 0;
}