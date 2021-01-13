// Find even, odd and prime number

#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    if (num % 2 == 0)
    {
        cout << num << " : is an even number" << endl;
    }
    if (num % 2 == 1)
    {
        cout << num << " : is an odd number" << endl;
    }
    int prime = 0;
    for (int n = 1; n <= num; n++)
    {
        if (num % n == 0)
        {
            prime++;
        };
    };
    if (prime == 2)
    {
        cout << num << " : is a prime number" << endl;
    }
    else
    {
        cout << num << " : is not a prime number" << endl;
    }
    return 0;
}