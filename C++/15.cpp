/* C++ program - add digits of number */
#include <iostream>
using namespace std;

int main()
{
    int num, rem = 0, sum = 0;

    cout << "\nEnter a number:";
    cin >> num;

    int temp = num;
    while (num > 0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    cout << "Sum of the digits of " << temp << " is " << sum;
    cout << endl;
    return 0;
}
/* output

Enter a number:132
Sum of the digits of 132 is 6

*/