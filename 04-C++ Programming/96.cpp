
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Svenska");
    float a;
    float b;
    float result;
    cout << "Enter two numbers: ";
    cin >> a >> result >> b;
    if (result == '+')
        cout << a + b;
    else if (result == '-')
        cout << a - b;
    else if (result == '*')
        cout << a * b;
    else if (result == '/')
        cout << a / b;
    else
        cout << "Results: -,+,*,/!!";
    _getch();
    return 0;
}
