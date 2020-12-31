/* Compute a running average of numbers entered by
the user.
*/
#include <iostream>
using namespace std;

int r_avg(int i);
int main()
{
    int num;
    do
    {
        cout << "Enter numbers (-1 to quit): ";
        cin >> num;
        if (num != -1)
            cout << "Running average is: " << r_avg(num);
        cout << '\n';
    } while (num > -1);
    return 0;
}
// Compute a running average.
int r_avg(int i)
{
    static int sum = 0, count = 0;
    sum = sum + i;
    count++;
    return sum / count;
}

/* output:

Enter numbers (-1 to quit): 22
Running average is: 22
Enter numbers (-1 to quit): 22
Running average is: 22
Enter numbers (-1 to quit): 42
Running average is: 28
Enter numbers (-1 to quit): -1

*/