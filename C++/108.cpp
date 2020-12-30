// Divide the first number by the second.

#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;

    cout << "Enter two number: ";
    cin >> a >> b;

    if (b)
        cout << a / b << endl;
    else
        cout << "Cannot divide by zero. \n";

    return 0;
}

/* 

Enter two number: 6 2
3

*/