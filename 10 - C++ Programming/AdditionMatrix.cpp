// addtion matrix

#include <iostream>
using namespace std;

int main()
{
    int a[3][4], b[3][4], c[3][4];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cin >> a[i][j];
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cin >> b[i][j];
        }
    }
    cout << "elemts of 1st matrix \n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {

            cout << a[i][j] << "  ";
        }
        cout << "\n";
    }
    cout << "elements of 2nd matrix \n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cout << b[i][j] << "  ";
        }
        cout << "\n";
    }
    //sum of two matrix
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    //print
    cout << " sum of two matrix\n";

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cout << c[i][j] << "  ";
        }
        cout << "\n";
    }
    return 0;
}