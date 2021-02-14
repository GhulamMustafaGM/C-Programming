// new fueil budget function

#include <iostream>
using namespace std;
int main()
{

    int n, l, t, i;
    double cost16, cost18, sum16 = 0, sum18 = 0, sum26 = 0, sum28 = 0, cost26, cost28, tot18, tot16;
    cout << "Pleas enter the number of cars you have !" << endl;
    cin >> n;

    for (i = 1; i <= n; i++)
    {

        cout << "Car #" << i << endl;

        cout << "Pleas enter the fuel liters" << endl;
        cin >> l;

        cout << "Pleas enter the type of fuel you have" << endl;
        cin >> t;

        switch (t)
        {

        case 91:
            cost16 = .75 * l;
            cout << "The old cost" << cost16 << "SR" << endl;

            cost18 = 1.37 * l;
            cout << "The new cost" << cost18 << "SR" << endl;

            cout << "The amout ot increas is =" << cost18 - cost16 << endl;
            sum16 += cost16;
            sum18 += cost18;

            break;

        case 95:
            cost26 = .90 * l;
            cout << "The old cost" << cost26 << "SR" << endl;

            cost28 = 2.04 * l;
            cout << "The new cost" << cost28 << "SR" << endl;

            cout << "The amout ot increas is =" << cost28 - cost26 << endl;

            sum26 = sum26 + cost26;
            sum28 = sum28 + cost28;

            break;

        default:
            cout << "Only fuel supported is 91 and 95" << endl;
        }

        cout << "=======================================" << endl;
    }

    tot16 = sum16 + sum26;
    tot18 = sum18 + sum28;

    cout << "Your new fuel budget of 2021 is = " << tot18 << "SR" << endl;
    cout << "The prercent of increas is =" << ((tot18 - tot16) / tot16) * 100 << "%" << endl;
}
