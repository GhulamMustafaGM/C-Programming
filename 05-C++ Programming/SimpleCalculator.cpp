// simple calculator + * / -

#include <iostream>
using namespace std;

int main()
{

    float a;
    float b;
    cout << "first number: ";
    cin >> a;
    cout << a << endl;
    cout << "second number: ";
    cin >> b;
    cout << b << endl
         << endl;

    float sum = a + b;
    float multiply = a * b;
    float divide = a / b;
    float minus = a - b;

    cout << "+: " << sum << endl;
    cout << "x: " << multiply << endl;
    cout << "/: " << divide << endl;
    cout << "-: " << minus << endl;

    return 0;
}