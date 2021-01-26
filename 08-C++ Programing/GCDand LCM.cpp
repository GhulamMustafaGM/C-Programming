// GCD and LCM

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    while (a != b)
        if (a > b)
            a -= b;
        else
            b -= a;
    return a;
}

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

int main()
{
    int a, b;

    cin >> a >> b;

    cout << "GCD(" << a << ", " << b << ") = " << gcd(a, b) << endl;
    cout << "LCM(" << a << ", " << b << ") = " << lcm(a, b) << endl;

    return 0;
}