
// This program demonstrates a block of code.

#include <iostream>
using namespace std;

int main()

{
    int a, b;

    cout << "\nEnter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    if (a < b)
    {
        cout << "First number is less than second. ";
        cout << endl;
        cout << "Their difference is: " << b - a;
        cout << endl;
    }

    return 0;
}

/* output:

Enter first number: 4
Enter second number: 5
First number is less than second.
Their difference is: 1

*/