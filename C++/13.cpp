*C++ program - addition, substraction, multiplication, division * /
#include <iostream>
                                                           using namespace std;

int main()
{
    int a, b, res;

    cout << "\nEnter two number: ";
    cin >> a >> b;

    res = a + b;
    cout << "\nAddition = " << res;

    res = a - b;
    cout << "\nSubstraction = " << res;

    res = a * b;
    cout << "\nMultiplication = " << res;

    res = a / b;
    cout << "\nDivision = " << res;

    res = a % b;
    cout << "/Remainder = " << res;

    return 0;
}

/* output 

Enter two number: 33 2

Addition = 35
Substraction = 31
Multiplication = 66
Division = 16
Remainder = 1

*/