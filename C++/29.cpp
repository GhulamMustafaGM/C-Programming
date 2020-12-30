/*C++ program - find factorail of number */
#include <iostream>
using namespace std;
int main()
{
    int num, i, fact = 1;

    cout << "\nEnter a number: ";
    cin >> num;

    for (i = num; i > 0; i--)
    {
        fact = fact * i;
    }
    cout << "Factorial of " << num << " is " << fact;
    cout << endl;

    return 0;
}

/*output 
Enter a number: 5
Factorial of 5 is 120

*/