// diamond

#include <iostream>
using namespace std;

int main()
{

    //user may change the size of diamond by just changing the value of h below

    int i, j, k, h = 10;

    // here h stands for hight of half diamond...

    //conatruction of upper part of diamond

    for (i = 1; i <= h; i++)
    {
        for (k = h; k >= i; k--)
            cout << " ";

        for (j = 1; j <= i; j++)
            cout << "* ";

        cout << "\n";
    }

    //construction of lower part of diamond

    for (i = h; i >= 1; i--)
    {
        for (k = 1; k <= h - i; k++)
            cout << " ";

        for (j = i; j >= 1; j--)
            cout << "* ";

        cout << "\n";
    }
    cout << "\n   Thank you very much! ";
    cout << "\n   Good bye!";
    return 0;
}
