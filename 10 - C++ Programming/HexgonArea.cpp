// Hexgon area functin

#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    double s, a, up, dow;
    const double PI = 3.141592653589793;

    cout << "Pleas, enter the side" << endl;
    cin >> s;

    up = 6 * pow(s, 2);
    dow = 4 * tan(PI / 6);

    a = up / dow;

    cout << "The area of the hexagon is"
         << " " << a << "." << endl;
}