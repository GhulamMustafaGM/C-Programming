// calculate the distance between points

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x1, y1, x2, y2, d;
    char ch;
    do
    {
        cout << "enter the first value of x \n";
        cin >> x1;
        cout << "enter the second value of x \n";
        cin >> x2;
        cout << "enter the first value of y \n";
        cin >> y1;
        cout << "enter the second value of y \n";
        cin >> y2;
        y1 = 1;
        y2 = 3;
        x1 = 5;
        x2 = 8;

        d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        cout << "the distance is " << d << endl;
        cout << "do you want to enter a new value (enter N to exit)";
        cin >> ch;
    } while (ch != 'N' && ch != 'n');
}