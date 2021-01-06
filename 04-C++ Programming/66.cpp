
// Calculation

#include <iostream>
using namespace std;

int main()
{
    int a, b, sum, difference, m, div;
    cout << "Enter The first Number:";
    cin >> a;
    cout << "Enter The second Number:";
    cin >> b;
    sum = a + b;
    cout << endl
         << "Sum=" << sum;
    difference = a - b;
    cout << endl
         << "Difference of number=" << difference;
    m = a * b;
    cout << endl
         << "Multiplication=" << m;
    div = a / b;
    cout << endl
         << "Division=" << div;
    return 0;
}