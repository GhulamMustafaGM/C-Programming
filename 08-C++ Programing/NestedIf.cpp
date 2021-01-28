// Nested if

#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3;
    cout << "Enter first number:";
    cin >> n1;
    cout << "Enter second number:";
    cin >> n2;
    cout << "Enter third number:";
    cin >> n3;

    if (n1 > n2)
    {
        if (n1 > n3)
            cout << "\nFirst number is the Largest.";
    }
    {
        if (n2 > n1)
        {
            if (n2 > n3)
                cout << "\nSecond number is the Largest.";
        }
    }
    {
        if (n3 > n1)
        {
            if (n3 > n2)
                cout << "\nThird number is the Largest.";
        }
    }
    return 0;
}