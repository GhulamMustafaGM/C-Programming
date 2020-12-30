/* C++ program -add two numbers using pointer */

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, *ptr1, *ptr2, sum = 0;

    cout << "\nEnter the two number:";
    cin >> num1 >> num2;

    ptr1 = &num1;
    ptr2 = &num2;

    sum = *ptr1 + *ptr2;

    cout << "Sum of the two number is " << sum << endl;

    return 0;
}
/*output 

Enter the two number:2 6
Sum of the two number is 8

*/
