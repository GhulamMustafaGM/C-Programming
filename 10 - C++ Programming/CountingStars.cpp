// Counting stars app

#include <iostream>
using namespace std;

int main()
{
    int a, b, b1, resA, resA1, resA2;
    cin >> a;
    if (a >= 100 && a < 1000)
    {
        resA = a / 100; //the first number
        resA1 = a % 10; //the last number
        b = a - resA1;
        b1 = b % 100;
        resA2 = b1 / 10; //the second number
        cout << "The first number is: " << resA << endl;
        cout << "The second number is: " << resA2 << endl;
        cout << "The last number is: " << resA1 << endl;
    }
    else if (a < 100)
    {
        resA = a / 10;  //the first number
        resA1 = a % 10; // the last number
        cout << "The first number is: " << resA << endl;
        cout << "The last number is: " << resA1 << endl;
    }
    return 0;
}
