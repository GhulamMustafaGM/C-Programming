/* C++ program - count positive, negative and zero numbers */

#include <iostream>
using namespace std;

int main()
{
    int countp = 0, count = 0, countz = 0, arr[10], i;

    cout << "Enter 10 numbers:";
    for (i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < 10; i++)
        if (arr[i] < 0)
        {
            countn++;
        }
        else if (arr[i] == 0)
        {
            countz++;
        }
        else
        {
            countp++;
        }
    cout << "Positive numbers = " << countp << endl;
    cout << "Negative numbers = " << countn << endl;
    cout << "Zero = " << countz << endl;

    return 0;
}

/*output 
Enter 10 numbers:2
3
0
3
2
-4
2
0
-4
0
Positive numbers = 5
Negative numbers = 2
Zero = 3

*/