//Table

#include <iostream>
using namespace std;

int main()
{
    int v[5][7], sum = 0;
    for (int a = 0; a < 5; a++)
    {
        for (int b = 0; b < 7; b++)
        {
            sum++;
            v[a][b] = sum;
        }
    }
    for (int a = 0; a < 5; a++)
    {
        cout << endl
             << "|";
        for (int b = 0; b < 7; b++)
        {
            if (v[a][b] < 10)
                cout << "  " << v[a][b] << " |";
            else
                cout << " " << v[a][b] << " |";
        }
    }
    return 0;
}
