// Magic number

/* Program to test magic numbers.. a typical magic number will result 1 after going through these steps;
1- the digit of the number will be counted like this ;
if number = 123 the sum of 1 + 2 + 3 will result 6.
2- if the sum of number digits is bigger than 9 .. the sum digits will be counted just like we did in the first step.
3- final sun should be between 0 and 9.. If the final sum is 1 the original number is a magic number.. otherwise it will be conaidered not magic..
*/
#include <iostream>
using namespace std;

int main()
{
    int number, sum = 0, n;
    cout << "Enter a number\n";
    cin >> number;
    while (number >= 10)
    {
        if (sum > 0)
        {
            number = sum;
        }
        while (number > 0)
        {
            n = number % 10;
            number /= 10;
            sum = sum + n;
        }
        number = sum;
        sum = 0;
    }
    if (number == 1)
    {
        cout << "Magic number..result = " << number;
    }
    else
    {
        cout << "not a magic number..final result = " << number;
    }
    return 0;
}