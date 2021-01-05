// Base Converter program

#include <iostream>

using namespace std;

int main()
{
    // a:our number in the first base
    // b:our first base
    // c:our target base
    //please attention to the relation between number and first base
    long a, b, c;
    long x = 0;
    long decimal = 0, coeffient = 1;
    cin >> a >> b >> c;

    for (int i = 0; a != 0; i++)
    {
        coeffient = 1;
        for (int j = 0; j < i; j++)
        {
            coeffient *= b;
        }
        decimal += (a % 10) * coeffient;
        a /= 10;
    }

    for (int i = 0; decimal != 0; i++)
    {
        coeffient = 1;
        for (int j = 0; j < i; j++)
        {
            coeffient *= 10;
        }
        x += (decimal % c) * coeffient;
        decimal /= c;
    }
    cout << x << endl;

    return 0;
}

/* ouput

a b c
0

*/