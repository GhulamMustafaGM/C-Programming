// This program converts gallons to liters.

#include <iostream>
using namespace std;

int main()
{
    int gallons, liters;

    cout << "\nEnter number of gallons:";
    cin >> gallons; // this inputs from the user

    liters = gallons * 4; // convert to liters

    cout << "Liters: " << liters << endl;
    return 0;
}

/* Output

Enter number of gallons:3
Liters: 12

*/