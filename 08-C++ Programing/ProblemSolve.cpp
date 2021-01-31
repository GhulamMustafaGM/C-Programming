// Problem solve

#include <iostream>
using namespace std;
bool ex_digit(int, int, int);
int digitcount(int);
int main()
{
    int number, digit, s;

    cin >> number;
    cin >> digit;
    if (digitcount(digit) > digitcount(number))
        cout << "numbers are wrong";
    s = digitcount(digit);
    for (int i = 0; i <= number; i++)
    {
        if (ex_digit(i, digit, s))
            cout << i << endl;
    }
    return 0;
}
bool ex_digit(int n, int d, int s)
{
    if (s == 1)
    {
        while (n)
        {
            if (n % 10 == d)
                return true;
            n /= 10;
        }
        return false;
    }
    else if (s == 2)
    {
        while (n)
        {
            if (n % 100 == d)
                return true;
            n /= 10;
        }
        return false;
    }
    else if (s == 3)
    {
        while (n)
            if (n % 1000 == d)
                return true;
        n /= 10;
    }
    return false;
}
int digitcount(int d)
{
    int s = 1;
    while (d / 10)
    {
        s++;
        d /= 10;
    }
    return s;
}