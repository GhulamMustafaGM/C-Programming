// GCD & LCM

// gcd: Greatest Common Divisor 
// lcm: Least Common Multiple

// Input 2numbers to calculate those gcd & lcm

#include <iostream>
using namespace std;
int main()
{
    int num1, num2, lcm;
    cin >> num1 >> num2;
    cout << "for(" << num1 << "," << num2 << ")" << endl;
    lcm = num1 * num2;
    while (num1 != num2)
    {
        if (num1 < num2)
        {
            num2 -= num1;
        }
        else
        {
            num1 -= num2;
        }
    }
    cout << "gcd = " << num1 << endl
         << "lcm = " << lcm / num1;
}