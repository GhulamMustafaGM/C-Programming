
// Binary to hexadecimal

#include <iostream>
using namespace std;

void binToHex(int a, int b);

int main()
{
    int number;
    int base = 16;

    cin >> number;

    binToHex(number, base);

    return 0;
}

void binToHex(int a, int b)
{
    int c[30];
    int i;

    for (i = 0; a != 0; i++)
    {
        c[i] = a % b;
        a = a / b;
    }

    for (i = i - 1; i >= 0; i--)
    {
        if (c[i] < 10 && c[i] >= 0)
        {
            cout << c[i];
        }
        if (c[i] == 10)
        {
            cout << 'A';
        }
        if (c[i] == 11)
        {
            cout << 'B';
        }
        if (c[i] == 12)
        {
            cout << 'C';
        }
        if (c[i] == 13)
        {
            cout << 'D';
        }
        if (c[i] == 14)
        {
            cout << 'E';
        }
        if (c[i] == 15)
        {
            cout << 'F';
        }
    }
}