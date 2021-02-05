// Automorphic numbers

#include <iostream>
#include <math.h>
using namespace std;

// enter a number and two numbers for range

int main()
{
    int n, n1, n2;
    int autom(int);
    cout << "Enter a number: ";
    cin >> n;
    cout << n;
    cout << "\nEnter range: ";
    cin >> n1 >> n2;
    if (n1 > n2)
    {
        n1 = n1 + n2;
        n2 = n1 - n2;
        n1 = n1 - n2;
    }
    cout << n1 << " to " << n2;
    if (autom(n))
    {
        cout << "\n"
             << n << " is an Automorphic Number";
    }
    else
    {
        cout << "\n"
             << n << " is not an Automorphic Number";
    }
    cout << "\nAutomorphic Numbers in the given range: ";
    for (int i = n1; i <= n2; i++)
    {
        if (autom(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}
int autom(int a)
{
    if (a == 0)
    {
        return 0;
    }
    int t, n, i, f, g;
    n = a;
    i = 0;
    while (n != 0)
    {
        n = n / 10;
        i++;
    }
    f = pow(a, 2);
    g = pow(10, i);
    t = f % g;
    if (t == a)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
