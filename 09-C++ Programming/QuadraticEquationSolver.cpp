// Quadratic Equation solver

#include <iostream>
#include <cmath>
using namespace std;

template <class e>
bool checkDis(e d, e i, e s)
{
    e res = i * i;
    res += (-4 * d * s);
    if (res < 0)
        return false;
    else if (res >= 0)
        return true;
}

template <class e>
e findDis(e x, e y, e z)
{
    e res = y * y;
    res += (-4 * x * z);
    if (res < 0)
        return 0;
    else if (res >= 0)
        return res;
}

template <class t>
void solve(t e, t f, t g)
{
    t res = f * f;
    res += (-4 * e * g);
    if (res < 0)
    {
        cout << "Cannot be solved" << endl;
    }
    res = sqrt(res);
    cout << endl
         << "x= " << ((-1 * f) - res) / (2 * e) << endl
         << "x= " << ((-1 * f) + res) / (2 * e) << endl;
}

int main()
{
    double a, b, c;
    cout << "Enter Coefficient of x^2: ";
    cin >> a;
    cout << a << endl;
    cout << "Enter Coefficient of x: ";
    cin >> b;
    cout << b << endl;
    cout << "Enter Constant: ";
    cin >> c;
    cout << c << endl
         << endl
         << endl;
    if (checkDis(a, b, c))
    {
        cout << "The discriminant reveals that there are one or more answers.\nFinding the discriminant ..." << endl;
        cout << "Complete." << endl;
        cout << findDis(a, b, c) << endl;
        if (findDis(a, b, c) > 0)
            cout << "There are two solutions to the problem." << endl;
        else
            cout << "There is only one solution to the problem." << endl;
        cout << endl
             << "Finding solutions..." << endl;
        solve(a, b, c);
    }
    else
        cout << "There is no solution to this quadratic.";

    return 0;
}