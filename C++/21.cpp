/* C++ programming - add n numbers */
#include <iostream>
using namespace std;
int main()
{
    int i, n, sum = 0, num;

    cout << "How many number you want to enter and add them ?";
    cin >> n;

    cout << "Enter " << n << "number:";
    for (i = 0; i < n; i++)
    {
        cin >> num;
        sum = sum + num;
    }
    cout << "Sum of all the " << n << " number is " << sum;
    return 0;
}

/*output 

How many number you want to enter and add them ?10
Enter 10number:1
1
2
3
4
5
6
7
8
9
Sum of all the 10 number is 46
*/