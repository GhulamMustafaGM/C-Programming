// Selection Sort

#include <iostream>
using namespace std;
int main()
{
    int a[10], m, i, j, min, k, temp;
    cout << "Number of element:";
    cin >> m;
    cout << "Insert element:";
    for (i = 0; i < m; i++)
        cin >> a[i];
    //  int minimum;

    for (i = 0; i < m - 1; i++)
    {
        min = a[i];
        for (j = i + 1; j < m; j++)
        {
            if (a[j] < min)
            {
                min = a[j];
                k = j;
            }
        }
        temp = a[i];
        a[i] = min;
        a[k] = temp;
        for (int x = 0; x < m; x++)
            cout << a[x] << " ";
        cout << endl;
    }
}