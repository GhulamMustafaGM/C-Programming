// Pyramid shape

#include <iostream>
using namespace std;

int main()
{
    int j, k, l;
    for (j = 0; j < 6; j++)
    {
        for (k = 6; k > j; j--)
        {
            cout << " ";
        }
        for (l = 0; l < j * 1 - 1; l++)
            cout << "*";
        cout << endl;
    }
    return 0;
}