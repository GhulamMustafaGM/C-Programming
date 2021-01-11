// Leyland numbers

#include <iostream>
#include <cmath>
using namespace std;

// Leyland number check
// x = a^b + b^a
// where x is a Leyland number.

bool IsALeylandNumber(int num)
{
    int a, b;
    for (a = 2;; a++)
    {
        for (b = 2;; b++)
        {
            if (pow(a, b) + pow(b, a) == num)
            {
                cout << "a: " << a << " b: " << b << endl;
                return true;
            }
            else if (pow(a, b) + pow(b, a) > num)
            {
                break;
            }
        }
        if (pow(a, 2) + pow(2, a) > num)
        {
            // 2 being b's starting value. Lowest power case scenario check.
            break;
        }
        b = 2;
    }
    cout << "a: " << a << " b: " << b << endl;
    return false;
}

int main()
{
    int leyland;
    cin >> leyland;

    if (IsALeylandNumber(leyland))
    {
        cout << leyland << " is a Leyland number" << endl;
    }
    else
    {
        cout << leyland << " is not a Leyland number" << endl;
    }

    return 0;
}