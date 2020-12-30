/* c++ program - HCF and LCM of two numbers */
#include <iostream>
using namespace std;

int main()
{
    int a, b, x, y, t, hcf, lcm;

    cout << "Enter two number ";
    cin >> x >> y;

    a = x;
    b = y;

    while (b != 0)
    {
        t = b;
        b = a % b;
        a = t;
    }
    hcf = a;
    lcm = (x * y) / hcf;
    cout << "HCF = " << hcf << endl;
    cout << "LCM = " << lcm << endl;

    return 0;
}

/*output
Enter two number 8
20
HCF = 4
LCM = 40
*/