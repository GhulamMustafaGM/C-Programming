// Returnig a value.

#include <iostream>
using namespace std;

int mul(int x, int y); // mul()'s prototype

int main()
{
    int answer;

    answer = mul(10, 11); // assign return value
    cout << "\nThe answer is " << answer;
    cout << endl;
    return 0;
}

int mul(int x, int y) // This function returns a value.
{
    return x * y; // return product of x and y
}

/* output:
The answer is 110
*/