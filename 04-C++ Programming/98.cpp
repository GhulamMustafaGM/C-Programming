// Convert length

#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int c;
    int d;
    float e;

    cout << "Please enter the total number of feet: \n";
    cin >> a;
    cout << "Please enter the total number of inches: \n";
    cin >> b;

    c = a * 12;
    d = c + b;
    e = d * 2.54;

    cout << a << " feet and " << b << " inches is equal to " << e << " centimeters.";

    return 0;
}