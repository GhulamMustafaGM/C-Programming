/* C++ program - user to enter two number then choose addition,
substraction, mulitplication and division */
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char ch;

    cout << "\nEnter first Number: ";
    cin >> a;

    cout << "Enter second Number: ";
    cin >> b;

    cout << "Enter Operator (+, -, *, /, %) :";
    cin >> ch;

    if (ch == '+')
        cout << "Result = " << a + b << endl;

    else if (ch == '-')
        cout << "Result = " << a - b << endl;

    else if (ch == '*')
        cout << "Result = " << a * b << endl;

    else if (ch == '/')
        cout << "Result = " << a / b << endl;

    else if (ch == '%')
        cout << "Result = " << a % b << endl;

    else
        cout << "Wrong Operator!!!" << endl;

    return 0;
}

/* output
Enter first Number: 32
Enter second Number: 2
Enter Operator (+, -, *, /,%) :@
Wrong Operator!!!
*/