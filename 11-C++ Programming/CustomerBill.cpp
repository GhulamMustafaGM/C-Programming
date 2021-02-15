// customer bill

#include <iostream>
using namespace std;

int main()
{
    int pr, no;
    double cost, d;
    const double d1 = 0.05;
    cout << "Enter item price: \n";
    cin >> pr;
    cout << "Enter No items: \n";
    cin >> no;
    if (pr >= 100 && no > 2)
    {
        cost = pr * no;
        d = cost * d1;
        cost = cost - d;

        if (cost > 1000)
        {
            d = cost * d1;
            cost = cost - d;
        }
    }
    else
        cost = (no * pr) + 10;

    cout << "the total cost is " << cost;

    return 0;
}