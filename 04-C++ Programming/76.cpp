// Automorphic number

#include <iostream>
using namespace std;
int main()
{
    //Variable declaration
    int s, c, p, n, i, t;

    //Take user input
    cout << "Enter a number : ";
    cin >> n;

    s = n * n;
    c = 0;
    p = 1;
    t = n;

    while (n != 0)
    {
        c++;
        n = n / 10;
    }

    for (i = 1; i <= c; i++)
    {
        p = p * 10;
    }

    if (s % p == t)
    {
        cout << "Your given Number is automorphic.";
    }

    else
    {
        cout << "Your Number is not automorphic.";
    }
}