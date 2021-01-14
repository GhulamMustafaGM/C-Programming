// Greatest common divisor

#include <stdio.h>
#include <cmath>

// Calculate the Greatest Common Divisor between two positive integers.

// Is the number even?
bool even(unsigned i)
{
    if (0 == (i % 2))
    {
        return true;
    }
    return false;
}

// Input: a, b positive integers
bool gcd(int a, int b, unsigned *gcd_result)
{
    // d := 0
    unsigned d = 0;
    unsigned g;

    // Ensure inputs are valid (a > 0 and b > 0).
    if (a <= 0 || b <= 0)
    {
        printf("\nWARNING: Please only give positive integers.\n\n");
        return false;
    }

    // Output: g and d such that g is odd and gcd(a, b) = g×2d
    // while a and b are both even do

    while (even(a) && even(b))
    {
        // a := a/2
        a = a / 2;
        // b := b/2
        b = b / 2;
        // d := d + 1
        d++;
    }
    // while a ≠ b do
    while (a != b)
    {
        // if a is even then a := a/2
        if (even(a))
        {
            a = a / 2;
        }
        //else if b is even then b := b/2
        else if (even(b))
        {
            b = b / 2;
        }
        //else if a > b then a := (a – b)/2
        else if (a > b)
        {
            a = (a - b) / 2;
        }
        //else b := (b – a)/2
        else
        {
            b = (b - a) / 2;
        }
    }

    // g := a
    g = a;

    // gcd(a, b) = g×(2^d)
    *gcd_result = g * pow(2, d);

    return true;
}

int main()
{
    int a = 40;
    int b = 30;
    unsigned result;

    // Calculate the Greatest Common Divisor of a and b.
    if (gcd(a, b, &result))
    {
        // Output the solution.
        printf("\nGCD(%d, %d) = %d\n\n", a, b, result);
    }
}