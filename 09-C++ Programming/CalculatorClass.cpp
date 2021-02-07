// Calculator using class

#include <iostream>
#include <cmath>
using namespace std;

class Calculator
{
public:
    calc(double x, char op, double y);
};

Calculator::calc(double x, char op, double y)
{
    switch (op)
    {
    case '+':
        return x + y;

    case '-':
        return x - y;

    case '*':
        return x * y;

    case '/':
        return x / y;

    default:
        return 0;
    }
}

int main()
{
    double x, y;
    char op;
    cout << "What is your equation? \n";
    cin >> x >> op >> y;
    cout << "Equation is: " << x << op << y << endl;

    Calculator c;
    cout << "Answer: " << c.calc(x, op, y) << endl;

    return 0;
}