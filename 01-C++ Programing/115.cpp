/* The switch statement 

it evaluates character or an integer value. C++ have specifies 
that a switch can have at least 16,384 case statement.

*/

// Demonstrate the switch using a simple "help " program.
#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "Help on: \n\n";
    cout << "1. for \n";
    cout << "2. if\n";
    cout << "3. switch \n\n";

    cout << "Enter choice (1-3): ";
    cin >> choice;
    cout << endl;

    switch (choice)
    {
    case 1:
        cout << "for is C++'s most verstile loop. \n";
        break;
    case 2:
        cout << "if is C++'s conditional branch statement. \n";
        break;
    case 3:
        cout << "switch is C++'s multiway branch statemnt. \n";
        break;
    default:
        cout << "You must enter a number between 1 and 3. \n";
    }
    return 0;
}

/* 

Help on:

1. for
2. if
3. switch

Enter choice (1-3): 2

if is C++'s conditional branch statement.

*/
