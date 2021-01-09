// Calculator Program

#include <iostream>
using namespace std;

int main()

{
    char operator1;

    float num1, num2;

    cout << "What Do you want to perform ?" << endl;

    cout << " + OR - OR * OR /" << endl;

    cin >> operator1;

    cout << "Enter first Numbers: " << endl;
    cin >> num1;

    cout << "Enter Secound Number: " << endl;
    cin >> num2;

    switch (operator1)
    {

    case '+':
        cout << num1 + num2;
        break;

    case '-':
        cout << num1 - num2;
        break;

    case '*':
        cout << num1 * num2;
        break;

    case '/':
        cout << num1 / num2;
        break;
    default:

        cout << "Error! operator is not correct";
        break;
    }
    return 0;
}