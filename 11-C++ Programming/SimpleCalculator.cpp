/*Now I would like you to do a switch statement with breaks

**between the cases. Create a program that asks the user for

**two float numbers. Then asks the user if they would like to:

**add the numbers, subtract the numbers, multiply the numbers,

**divide the numbers.

**The program should then print the numbers with the chosen

**operation and the solution. 
*/

#include <iostream>
using namespace std;

int main()
{
    float in1, in2;
    char operation;
    float answer;

    cout << "Enter two numbers:\n";
    cin >> in1;
    cin >> in2;

    cout << "Enter the operation '+','-','*','/':\n";
    cin >> operation;

    switch (operation)
    {
    case ('+'):
    {
        answer = in1 + in2;
        break;
    }
    case ('-'):
    {
        answer = in1 - in2;
        break;
    }
    case ('*'):
    {
        answer = in1 * in2;
        break;
    }

    case ('/'):
    {
        answer = in1 / in2;
        break;
    }

    default:
        cout << "Illegal Operation";
    }
    cout << in1 << operation << in2 << " = " << answer << "\n";

    return 0;
}

/* ouput

Enter two numbers:
5 6
Enter the operation '+','-','*','/':
+
5+6 = 11

*/