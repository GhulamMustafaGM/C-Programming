/*C++ pattern program of numbers 12 */
#include <iostream>
using namespace std;

int main()
{
    int i, j, num = 1, incr = 1;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < incr; j++)
        {
            cout << num++ << "  ";
            /*
			in the above statement
			first num printed their
			previous value, then 
			incremented by 1 */
        }
        cout << "\n";
        incr = incr + 2;
    }
    return 0;
}

/*output 
1
2  3  4
5  6  7  8  9
10  11  12  13  14  15  16
17  18  19  20  21  22  23  24  25

*/