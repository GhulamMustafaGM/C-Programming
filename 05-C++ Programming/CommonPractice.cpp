
// Highest common factor

#include <iostream>
using namespace std;

/* Input two numbers to get their HCF,i.e,highest common factor*/

int main()
{
    int a, b, n = 1, hcf;
    cin >> a;
    cin >> b;
    while (n <= a && n <= b)

    / *loop checks the highest number that divides both a & b and assigns it's value to hcf*/

    {
        if (a % n == 0 && b % n == 0)
        {
            hcf = n;
        }
        n++;
    }
    cout << "HCF of " << a << " and " << b << " is " << hcf;
    cout << endl
         << endl
         << "Thanks for trying this code." << endl
         << "Hit like if you like it.";
    return 0;
}
