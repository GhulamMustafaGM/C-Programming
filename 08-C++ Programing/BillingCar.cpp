// Billing a car

#include <iostream>
using namespace std;
class ac0
{
public:
    int func(int x)
    {
        int j;
        x = 0;

        cout << "\nDo u want ac1 = Rs.100:";
        cin >> j;
        if (j == 1)
        {
            x = x + 100;
        }
        else
        {
            cout << "\nOK\n";
        }

        cout << "\nDo u want ac2= Rs.200:";
        cin >> j;
        if (j == 1)
        {
            x = x + 200;
        }
        else
        {
            cout << "\nOK\n";
        }

        return x;
    };
};
int main()
{
    int y = 50000, ac, total, i;
    cout << "\n 1 for Yes. Any other for No.\n";
    cout << "\n Price of car =Rs." << y;
    ac0 car;
    i = car.func(ac);
    total = y + i;
    cout << "\nTotal Cost= Rs." << total;
    return 0;
}