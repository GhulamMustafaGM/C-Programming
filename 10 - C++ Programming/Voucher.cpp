// voucher

#include <iostream>
using namespace std;
int main()

{
    double v, cost = 0.0, tot1 = 0.0, tot = 0.0, tot2, no;
    char b;
    int x = 1;

    cout << "Pleas enter the amount of voucher " << endl;
    cin >> v;

    while (x != 0)

    {
        cout << "What to buy : (B for book, s for story) ?" << endl;
        cin >> b;

        switch (b)
        {
        case 'b':
        case 'B':
            cost = 35;
            break;
        case 's':
        case 'S':
            cost = 15;
            break;
        default:
            cout << "Enter a corrct option" << endl;
            cost = 0;
        }

        tot1 = tot1 + cost;
        tot = ((v - tot1) / v);

        if (tot1 > v)
        {
            cout << "sorry the money left is not enough, cant buy" << endl;
            tot1 = tot1 - cost;
            cout << "============================================" << endl;
            break;
        }

        cout << "You have" << tot * 100 << "% of the money avaiable" << endl;
        cout << "-----------------------" << endl;

        if (tot1 == v)
            break;

        cout << "Do you want to by other item? (any key to continue - 0 to exit)" << endl;
        cin >> x;
    }

    cout << "You have spent :  " << tot1 << "RS." << endl;
    cout << "You still have :  " << v - tot1 << "RS." << endl;
}