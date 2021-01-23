// Staircase pattern

#include <iostream>
using namespace std;

/* staircase pattern

    *
   **
  ***
 ****
*****

*/

//input no. of rows

int main()
{
    int r;       //no. of rows
    int i, j, k; //indices
    int l = 1;

    cin >> r;

    //for loop for rows
    for (i = 1; i <= r; i++)
    {
        //for loop for printing spaces
        for (j = l; j <= r - 1; j++)
        {
            cout << " ";
        }
        //for loop for printing *
        for (k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
        l++;
    }

    return 0;
}