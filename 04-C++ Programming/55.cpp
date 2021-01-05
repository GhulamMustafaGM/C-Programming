// Simple Calculator (+*/-) program

/* Choose 2 numbers with a space in it, like this 10 5.*/

#include <iostream>
using namespace std;

int main()
{

    float a;
    float b;
    cout << "first number: ";
    cin >> a;
    cout << a << endl;
    cout << "second number: ";
    cin >> b;
    cout << b << endl
         << endl;

    float sum = a + b;
    float multiply = a * b;
    float divide = a / b;
    float minus = a - b;

    cout << "+: " << sum << endl;
    cout << "x: " << multiply << endl;
    cout << "/: " << divide << endl;
    cout << "-: " << minus << endl;

    return 0;
}

/* ouput

first number: 5
5
second number: 4
4

+: 9
x: 20
/: 1.25
-: 1

*/