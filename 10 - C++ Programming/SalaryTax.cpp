// Salary tax

#include <iostream>
using namespace std;

int main()
{

    float tax;    // percentage of the tax
    float salary; // salary in $
    float rate;

    cout << "insert the value of %tax and salary:\n";

    cin >> tax;
    cin >> salary;

    //print the input
    cout << "\n    > tax % = " << tax << "%";
    cout << "\n    > salary = " << salary;
    cout << "$";

    //calculate the rate
    rate = (tax * salary) / 100;

    //print the final result
    cout << "\n\n";
    cout << "The annul salary after tax:";
    cout << "\n\n    >>" << salary - rate;
    cout << "$.";

    return 0;
}