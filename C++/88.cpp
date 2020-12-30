// This program converts gallons to liters using floating point numbers.

#include <iostream>
using namespace std;

int main()
{
    double gallons, liters;

    cout << "\nEnter number of gallons: ";
    cin >> gallons; // this inputs from the user

    liters = gallons * 3.7854; // convert to liters

    cout << "Liters: " << liters;
    cout << "\n";
    return 0;
}

/* Output

Enter number of gallons: 2
Liters: 7.5708

*/

/* Functions 

A C++ program is constructed from building blocks called functions.

*/