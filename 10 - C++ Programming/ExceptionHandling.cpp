// exception handling

#include <iostream>
using namespace std;

int main()
{
    float a, b, c;
    cout << "Enter two number for division" << endl;
    cin >> a >> b;
    c = a / b;
    try
    {
        if (b != 0)
        {
            cout << "\nTheir division is:\n"
                 << c;
        }
        else
        {
            throw b;
        }
    }
    catch (float d)
    {
        cout << "\nError,because the divisor is " << d;
    }
    return 0;
}