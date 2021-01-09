// Two variable calculator

#include <iostream>
using namespace std;

int main()
{
    double x;
    double y;
    char o;
    cout << "---2 VARIABLE CALCULATOR PROGRAM--- \n";
    cout << "INSTRUCTIONS TO USE: \n";
    cout << "Input two decimal number, separate between them with this following operand: \n";
    cout << "'+', for addition \n"
         << "'-', for subtraction \n"
         << "'*', for multiplication \n"
         << "'/'for division \n";
    cin >> x >> o >> y;
    cout << "THE RESULT IS: \n";
    if (o == '+' || o == '-' || o == '*' || o == '/')
    {
        if (o == '+')
        {
            cout << x << " + " << y << "= " << x + y;
        }
        if (o == '-')
        {
            cout << x << " - " << y << "= " << x - y;
        }
        if (o == '*')
        {
            cout << x << " * " << y << "= " << x * y;
        }
        if (o == '/')
        {
            cout << x << " / " << y << "= " << x / y;
        }
    }
    else
    {
        cout << "Please use the available operand";
    }

    return 0;
}