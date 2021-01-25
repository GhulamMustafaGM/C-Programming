#include <iostream>
using namespace std;

/*Enter Number of Rows*/

int main()
{
    int i, j, s, r, c = 1;
    cin >> r;
    for (i = 0; i < r; i++)
    {
        c = 1;
        for (s = 1; s < (r - i); s++)
            cout << " ";
        for (j = 0; j <= i; j++)
        {
            cout << " " << c;
            c = c * (i - j) / (j + 1);
        }
        cout << endl;
    }
    return 0;
}
