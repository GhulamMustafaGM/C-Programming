/* This program uses the ? operator to prevent
a division by zero. */

#include <iostream>
using namespace std;

int div_zero();
int main()
{
    int i, j, result;
    cout << "Enter dividend and divisor: ";
    cin >> i >> j;

    // This statement prevents a divide by zero error.

    result = j ? i / j : div_zero();
    cout << "Result: " << result;
    return 0;
}
int div_zero()
{
    cout << "Cannot divide by zero.\n";
    return 0;
}

/* output:

Enter dividend and divisor: 56 8
Result: 7

*/