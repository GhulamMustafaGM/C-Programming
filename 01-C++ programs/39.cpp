/*C++ program - Generate armstrong numbers */
#include <iostream>
using namespace std;

int main()
{
    int num1, num2, i, n, rem, temp, count = 0;
    //enter the interval (enter the two number)

    cout << "\nEnter Starting number:";
    cin >> num1;
    cout << "Enter Ending number:";
    cin >> num2;

    for (i = num1 + 1; i < num2; i++)
    {
        temp = i;
        n = 0;
        while (temp != 0)
        {
            rem = temp % 10;
            n = n + rem * rem * rem;
            temp = temp / 10;
        }
        if (i == n)
        {
            if (count == 0)
            {
                cout << "Armstrong numbers between the given interval are";
                cout << endl;
            }
            cout << i << " ";
            count++;
        }
    }
    if (count == 0)
    {
        cout << "Armstrong number not found between the given interval";
        cout << endl;
    }

    return 0;
}
/*output 
Enter Starting number:1
Enter Ending number:1000
Armstrong numbers between the given interval are
153 370 371 407
*/