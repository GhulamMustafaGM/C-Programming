// Diamond Shape Pattern

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    srand(time(0));
    int n(0), k(1), o(0), h(0), rd(0);
    char a(32);
    n = 10;
    h = n;
    o = n;
    for (int i(0); i < n; i++)
    {
        if (k % 2 == 0)
            goto etiq;
        for (int j(0); j < (n / 2) + h; j++)
            cout << a;
        for (int p(0); p < k; p++)
        {
            if (k % 2 != 0)
            {
                rd = rand() % n;
                cout << rd;
            }
        }
        for (int x(0); x < (n / 2) + h; x++)
            cout << a;
        cout << endl;
        h--;
    etiq:
        k++;
    }
    h = o;
    n = 0;
    k = o - 1;
    for (int i(o); i > 0; i--)
    {
        if (k % 2 == 0)
            goto etiq1;
        for (int j(o); j > (o / 2) - h + o / 2 - 1; j--)
            cout << a;
        for (int p(0); p < k; p++)
        {
            if (k % 2 != 0)
            {
                rd = rand() % o;
                cout << rd;
            }
        }
        for (int x(o); x > (o / 2) - h + o / 2 - 1; x--)
            cout << a;
        cout << endl;
        h++;
    etiq1:
        k--;
    }
    return 0;
}