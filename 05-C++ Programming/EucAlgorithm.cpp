// Euclidean algorithm

#include <iostream>

using namespace std;

int main()
{
    const int x = 3355, y = 2379;

    int a = x, b = y, c = 0;

    while (true)
    {
        c = a % b; //a mod b = c
        if (c == 0)
            break;
        else
        {
            a = b;
            b = c;
        }
    }
    cout << b << endl; //The greatest common divisor.
    return 0;
}
