// calculate the salary function

#include <iostream>
using namespace std;
double sala(double h, double hh);

int main()
{

    double y, yr;
    int x = 1, i = 1;

    while (x >= 0)
    {

        cout << "Pleas, enter the number of hours and hour rate of the employee"
             << "#" << i << endl;
        cin >> y >> yr;

        cout << "The salary is :"
             << " " << sala(y, yr) << endl;

        i++;

        cout << "Enter any number to redo that again or negative to exist" << endl;
        cin >> x;
    }
}

double sala(double h, double hh)
{

    double pay;
    pay = h * hh;
    return pay;
}