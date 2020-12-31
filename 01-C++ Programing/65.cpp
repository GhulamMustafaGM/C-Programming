/* This C++ program prints pattern of numbers 13 */

#include <iostream>
using namespace std;

int main()
{

    int i, j, k, num = 1, decr = 8, count = 0, temp;

    for (i = 0; i < 5; i++)
    {
        // this loop is to print spaces
        for (k = 0; k < decr; k++)
        {
            cout << " ";
        }

        // this loop is to give the required value to num
        for (j = 0; j < i; j++)
        {
            count++;
        }
        num = count;
        temp = num;

        // this loop is to print the numbers
        for (j = 0; j < i; j++)
        {
            cout << num-- << " ";
            /* from the above statement,
			 * num is first printed, then
			 * decremented by 1 */
        }
        cout << "\n";
        num = temp;
        decr = decr - 2;
    }
    return 0;
}
/*output
	1
	3 2
  6 5 4
10 9 8 7

*/