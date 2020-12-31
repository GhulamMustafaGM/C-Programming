// Use explicit std:: qualification.

#include <iostream>

int main()
{
    double val;

    std::cout << "Enter a number: ";
    std::cin >> val;

    std::cout << "This is your number: ";
    std::cout << val;

    return 0;
}

/* Output:

Enter a number: 27
This is your Number: 27

*/

// Bring only a few names into the global namespace.
#include <iostream>

// gain access to cout and cin

using std::cout;
using std:;
cin;

int main()
{
    double val;

    cout << "Enter a number: ";
    cin >> val;

    cout << "This is your number: ";
    cout << val;
    cout << endl;

    return 0;
}

/* Output:

Enter a number: 88
This is your number: 88

*/