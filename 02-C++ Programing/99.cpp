// Use an exception class.

#include <iostream>
#include <cstring>
using namespace std;

class MyException
{
public:
    char str_what[80];

    MyException() { *str_what = 0; }

    MyException(char *s)
    {
        strcpy(str_what, s);
    }
};

int main()
{
    int a, b;

    try
    {
        cout << "Enter numerator and denominator: ";
        cin >> a >> b;

        if (!b)
            throw MyException("Cannot divide by zero! ");
        else
            cout << "Quotient is " << a / b << endl;
    }

    catch (MyException e)
    { // catch an error
        cout << e.str_what << endl;
    }

    return 0;
}

/* Output:

Enter numerator and denominator: 10 0
Cannot divide by zero!

*/