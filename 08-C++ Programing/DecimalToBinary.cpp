// Decimal to binary my

#include <iostream>
using namespace std;

int main()
{
    int a, bin = 0, rem, i;
    cout << "Enter decimal number";
    cin >> a;
    cout << a;
    for (i = 1; a != 0; i = i * 10)
    {
        rem = (a % 2);
        a = a / 2;
        bin = bin + (i * rem);
    }
    cout << bin;
    return 0;
}