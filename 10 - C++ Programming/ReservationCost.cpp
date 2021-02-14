// reservation cost

#include <iostream>
using namespace std;
int main()
{

    int r, cost, l, m = 1, co;
    char x;

    while (m != 0)
    {
        cout << "Enter room type" << endl;
        cout << "(S) Single Room" << endl;
        cout << "(D) Double Room" << endl;
        cout << "(K) King Room" << endl;
        cin >> x;

        switch (x)
        {
        case 's':
        case 'S':
            co = 250;
            break;
        case 'd':
        case 'D':
            co = 400;
            break;
        case 'K':
        case 'k':
            co = 550;
            break;
        default:
            co = 0;
        }

        if (co > 0)
        {
            cout << "Enter the number of days" << endl;
            cin >> l;
            cost = co * l;
            cout << "The total cost of " << l << " days will be =" << cost << endl;
        }
        else
            break;

        cout << "Next Customer (press 0 to stop)" << endl;
        cin >> m;
    }
}