// If else statement calculator

#include <iostream>
using namespace std;

int main()
{

    double a, b;
    char c;

    cin >> a;
    cin >> c;
    cin >> b;

    if (c == '+')
    {
        cout << a << "+" << b << "=" << a + b;
    }
    else if (c == '-')
    {
        cout << a << "-" << b << "=" << a - b;
    }
    else if (c == '*')
    {
        cout << a << "*" << b << "=" << a * b;
    }
    else if (c == '/')
    {
        cout << a << "/" << b << "=" << a / b;
    }
    else
    {
        cout << "wrong input";
    }

    return 0;
}