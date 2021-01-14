// Prime numbers between two numbers

#include <iostream>
using namespace std;

int main()
{

    /*Input the first natural number then in next line other natural number to get all the prime numbers between them*/

    /*This program will work even if you input negative integers or same numbers*/

    long a, b, x, y, count = 0;
    cin >> a;
    cin >> b;
    x = a;
    y = b;
    if (a >= b)
    {
        x = b;
        y = a;
    }
    if (x <= 1 && y <= 1)
    {
        x = 4;
        y = 4;
    }
    if (x <= 1)
    {
        x = 2;
    }
    if (y <= 1)
    {
        y = 2;
    }

    while (x <= y)
    {
        long n = 2, code = 1;
        while (n <= x / 2)
        {
            if (x % n == 0)
            {
                code = 0;
                break;
            }
            n++;
        }
        if (code == 1)
        {
            cout << x << ";";
            count++;
        }
        x++;
    }
    cout << endl
         << count << " Prime numbers between " << a << " and " << b << endl;
    cout << endl
         << "Great!" << endl
         << "Good Luck!" << endl;
    return 0;
}