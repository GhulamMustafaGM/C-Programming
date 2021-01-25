#include <iostream>
using namespace std;
int main()
{
    float i, j, k, l, n, o;
    cout << "Your age (in years) is\n";
    cin >> i;
    cout << "Your weight (in kg) is\n";
    cin >> j;
    cout << "Your height(in centimeter) is\n";
    cin >> k;
    cout << "Your Gender is\n";
    //If you are male, please input 1 here. If you are female, you can put any number.
    cin >> l;
    if (l = 1)
    {
        n = 66.47 + j * 13.7 + 5 * k - i * 6.8;
        cout << "Your BMR is " << n;
    }
    else
    {
        o = 655.1 + 9.6 * j + 1.8 * k - 4.7 * i;
        cout << "Your BMR is " << o;
    }
}