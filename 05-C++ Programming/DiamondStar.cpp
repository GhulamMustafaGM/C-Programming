// Diamond star

#include <iostream>
using namespace std;

int main()
{
    int i, j, k, p, q, r;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 4 - i; j++)
            cout << " ";
        for (k = 1; k <= 2 * i - 1; k++)
            cout << "*";

        cout << endl;
    }
    for (p = 3; p >= 1; p--)
    {
        for (r = 1; r <= 4 - p; r++)
            cout << " ";
        for (q = 1; q <= 2 * p - 1; q++)
            cout << "*";

        cout << endl;
    };
    return 0;
}
