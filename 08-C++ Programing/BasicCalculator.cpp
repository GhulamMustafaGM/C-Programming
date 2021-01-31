//Basic calculator

#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "please enter number for a \n";
    cin >> a;
    cout << "please enter number for b \n";
    int b;
    cin >> b;

    int
        sum = a + b,
        difference = a - b,
        product = a * b,
        quotient = a / b,
        remainder = a % b;

    cout << "sum = " << sum << endl
         << "difference = " << difference << endl
         << "product = " << product << endl
         << "quotient = " << quotient << endl
         << "remainder = " << remainder << endl
         << "quotient multiplied by b plus remainder =  a \n"
         << quotient * b + remainder;

    return 0;
}
