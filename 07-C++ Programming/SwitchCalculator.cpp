// Switch case calcualtor

#include <iostream>
using namespace std;

int main()
{
    char x;
    float num1, num2;
    //Float is used in case of high precisions
    cout << "Enter an operator (+ or - or * or /)" << endl;
    //Enter an operator in the first line
    cin >> x;
    //Allows the input of the operator
    cout << "Enter two numbers: " << endl;
    /* Enter num1 in the line after the operator.
       Enter num2 in the line after num1*/
    cin >> num1 >> num2;
    //Allows the input of num1 and num2
    cout << num1 << endl;
    cout << num2 << endl;
    //The inputed numbers
    switch (x)
    {
    case '+':
        cout << num1 + num2;
        //Addition
        break;
    case '-':
        cout << num1 - num2;
        //Subtraction
        break;
    case '*':
        cout << num1 * num2;
        //Multiplication
        break;
    case '/':
        cout << num1 / num2;
        //Division
        break;
    default:
        cout << "Syntax Error" << endl;
        //when an invalid operator or operand is included
        break;
    }

    return 0;
}