// Pythagorean theorem

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, b;
    float c;

    cout << "Enter a value of the first side of a triangle ";
    cin >> a;
    cout << a << endl;
    cout << "Enter a value of the second side of a triangle ";
    cin >> b;
    cout << b << endl;

    if (a < 0 || b < 0)
    {
        cout << "\n\n Length of a triangle must be greater than zero.";
    }
    else
    {
        c = pow(pow(a, 2) + pow(b, 2), 0.5);
        cout << "\n(" << a << "^2 + " << b << "^2"
             << ")"
             << "^0.5 =   " << c;
    }
    return 0;
}
