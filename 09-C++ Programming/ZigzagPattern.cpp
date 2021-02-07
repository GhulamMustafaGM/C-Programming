// Horizontal zig zag pattern

#include <iostream>
using namespace std;
int main()
{
    long int n, s, s1 = 4, s2 = 0, i, j, k = 2;
    cout << "Enter a number\n";
    cin >> n;
    cout << n;
    if (n < 0)
    {
        cout << "Enter only positive numbers";
        return 0;
    }
    cout << endl
         << endl;
    for (j = 5; j > 0; j--)
    {
        i = j;
        while (i <= n)
        {
            for (s = 1; s <= s1; s++)
                cout << " ";
            cout << i;
            for (s = 1; s <= 4 - s1; s++)
                cout << " ";
            for (s = 1; s < s2; s++)
                cout << " ";
            if (j != 1 && j != 5 && i + k <= n)
                cout << i + k;
            for (s = 1; s <= 3 - s2; s++)
                cout << " ";
            i += 8;
        }
        s1--;
        s2++;
        if (j != 1 && j != 5)
            k += 2;
        cout << endl;
    }
    cout << endl
         << endl;
    s1 = 4;
    s2 = 0;
    k = 2;
    for (j = 5; j > 0; j--)
    {
        i = j;
        while (i <= n)
        {
            for (s = 1; s <= s1; s++)
                cout << " ";
            cout << "*";
            for (s = 1; s <= 4 - s1; s++)
                cout << " ";
            for (s = 1; s < s2; s++)
                cout << " ";
            if (j != 1 && j != 5 && i + k <= n)
                cout << "*";
            for (s = 1; s <= 3 - s2; s++)
                cout << " ";
            i += 8;
        }
        s1--;
        s2++;
        if (j != 1 && j != 5)
            k += 2;
        cout << endl;
    }
    return 0;
}
