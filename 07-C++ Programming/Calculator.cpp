#include <iostream>
#include <math.h>
using namespace std;
int main()
{

    double n1, n2, r;
    char action;
    int b = 1;
    while (b == true)
    {
        if (b == 1)
        {
            cout << "Enter x action y \n";
            cin >> n1 >> action >> n2;
            switch (action)
            {
            case '+':
                r = n1 + n2;
                cout << r << endl;
                break;
            case '-':
                r = n1 - n2;
                cout << r << endl;
                break;
            case '*':
                r = n1 * n2;
                cout << r << endl;
                break;
            case '/' ... ':':
                try
                {
                    if (n2 == 0)
                    {
                        throw 66;
                    }
                    r = n1 / n2;
                    cout << r << endl;
                }
                catch (int e)
                {
                    cout << "Division by zero - Error: " << e << endl;
                }
                break;
            case '%':
                try
                {
                    if (n2 == 0)
                    {
                        throw 99;
                    }
                    r = int(n1) % int(n2);
                    cout << r << endl;
                }
                catch (int e)
                {
                    cout << "Division by zero - Error: " << e << endl;
                }
                break;
            case '^':
                r = pow(n1, n2);
                cout << r << endl;
                break;
            default:
                cout << "Enter the action (+, -, *, /, %, ^)";
            }
        }
        else
        {
            break;
        }
        cout << "Enter 1 to continue, or 0 to quit: ";
        cin >> b;
    }

    return 0;
}