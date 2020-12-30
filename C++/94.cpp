// This progra illustrates the if statement

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    if (a < b)
        cout << "First number is less than second.";
    return 0;
}

/* Output:

	First number is less than second.
*/