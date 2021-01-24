// Find digit d (0-9)

/*
Create a program to find all the integer values between 0 and n, which contain the digit d.
d is from the range 0 to 9.

For Example:
Input: n = 20, d = 5
Output: 5, 15

Input: n = 50, d = 2
Output: 2, 12, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 32, 42.

Bonus: You may extend the value of d to any integer value.
For Example:
Input: n = 300, d = 42
Output: 42, 142, 242.
*/

#include <iostream>
using namespace std;

int FoundDigit(int n, int d)
{

    int rem;

    while (n)
    {
        rem = n % 10;

        if (rem == d)
        {
            return 1;
        }
        n = n / 10;
    }
    return 0;
}

void Find_d(int n, int d)
{

    int i;

    for (i = 0; i <= n; i++)
    {
        if (FoundDigit(i, d))
        {
            cout << i << ", ";
        }
    }
}

int main()
{

    int digit;
    int num;

    cin >> num;

    cin >> digit;

    cout << "Input: n = " << num;
    cout << ", d = " << digit;
    cout << "\n\n";

    cout << "Output: ";

    Find_d(num, digit);
    return 0;
}
