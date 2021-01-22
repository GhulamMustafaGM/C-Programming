// Palindrome numbers

#include <iostream>
using namespace std;

int main()
{
    int number = 343;
    int rev = 0;
    int b;
    int c = number;

    while (number != 0)
    {
        b = number % 10;
        rev = (rev * 10) + b;
        number = number / 10;
    }

    if (rev == c)
    {
        cout << c << " is a palindrome number";
    }
    else
    {
        cout << c << " is not a palindrome number";
    }

    return 0;
}