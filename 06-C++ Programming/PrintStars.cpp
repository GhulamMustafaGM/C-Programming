// Print number of stars

#include <iostream>
using namespace std;
int main()
{
    int i, k = 1, j, nl;
    cout << "Enter number lines\n";
    cin >> nl;
    for (i = 0; i < nl; i++)
    {
        for (j = 0; j < k; j++)
        {
            cout << "*";
        }
        cout << "\n";
        k = k + 2;
    }
    return 0;
}
