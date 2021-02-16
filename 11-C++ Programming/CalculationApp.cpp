/* write a program that asks a user for five numbers.
	Print out the sum and average of the five numbers.
*/

#include <iostream>
using namespace std;

int main()
{
    float number;
    float sum = 0;

    for (int j = 0; j < 5; j++)
    {
        cout << "Enter Five numbers: " << endl;
        cin >> number;
        sum = sum + number;
    } // end of for loop

    cout << "Sum : " << sum << endl;
    cout << "Average: " << sum / 5 << endl;

    return 0;
}

/* output

Enter Five numbers:
3
Enter Five numbers:
4
Enter Five numbers:
6
Enter Five numbers:
77
Enter Five numbers:
8
Sum : 98
Average: 19.6