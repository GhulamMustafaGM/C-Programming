// Base Converter

#include <iostream>
using namespace std;

//just enter number and base
//e.g. 25  7
//e.g. 368 4

void baseConverter(int a, int b);

int main()
{
    int number;
    int base;

    cin >> number;
    cin >> base;

    baseConverter(number, base);

    return 0;
}

void baseConverter(int a, int b)
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
        cout << c[i];
    }
}