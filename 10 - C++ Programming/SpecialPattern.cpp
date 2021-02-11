// special pattern

#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    for (int i = 0; i < n; i++)
    {
        cout << "#";
    }
    cout << "\n";
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            //cout<<j<<","<<i;
            if (j == (n - 2 - i) || (j == (i + 1)))
            {
                cout << "#";
            }
            else if (j == 0 || j == n - 1)
            {
                cout << "#";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    for (int i = 0; i < n; i++)
    {
        cout << "#";
    }
    return 0;
}