// Employee salary

#include <iostream>
using namespace std;
double uiu = 0;
int id = 0;
double sala(double h, double hh);
void maxsala(double x, int y);

int main()
{

    double y, yr, ne;
    int x = 1, i = 1, n;

    while (x >= 0)
    {
        cout << "Pleas, enter the number of hours and hour rate of the employee"
             << "#" << i << endl;
        cin >> y >> yr;

        ne = sala(y, yr);

        cout << "The salary is :"
             << " " << ne << endl;
        cout << "       " << endl;

        maxsala(ne, i);

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

void maxsala(double x, int y)
{
    if (x > uiu)
    {
        uiu = x;
        id = y;
    }

    cout << "The max salary so far is:" << uiu << "it is for employee #" << id << endl;
}