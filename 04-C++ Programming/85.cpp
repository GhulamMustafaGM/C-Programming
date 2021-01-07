// Convert Temperature (f to c)

#include <iostream>
using namespace std;

int main()
{
    float f;
    float c;
    cout << "Please enter the degrees in fahrenheit: \n";
    cin >> f;

    c = (f - 32) * (.555556);

    cout << f << " degrees fahrenheit is equal to " << c << " degrees celcius.";

    return 0;
}