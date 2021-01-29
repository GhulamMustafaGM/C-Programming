// Simple Calculator

#include <iostream>
    using namespace std;
int main()
{
    float op1, op2, res;
    char ch;
    /*In the first two lines enter two digits and in the third line enter an operator*/
    cout << "Two numbers you entered: ";
    cin >> op1 >> op2;
    cout << op1 << " , " << op2;
    cout << "\n"
         << "The operator you entered(+, -, *, /, %) : ";
    cin >> ch;
    cout << ch;
    cout << "\n";
    switch (ch)
    {
    case '+':
        res = op1 + op2;
        break;
    case '-':
        res = op1 - op2;
        break;
    case '*':
        res = op1 * op2;
        break;
    case '/':
        if (op2 == 0)
            cout << "Divide by zero error!!!";
        else
            res = op2 / op1;
        break;
    case '%':
        if (op2 == 0)
            cout << "Divide by zero error!!!";
        else
        {
            int r, q;
            q = op2 / op1;
            r = op2 - (q * op1);
            res = r;
        }
        break;
    default:
        cout << "\n"
             << "Wrong operator!!!";
    }
    cout << "The calculated result is :" << res << "\n";
}
