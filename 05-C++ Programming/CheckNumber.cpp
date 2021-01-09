// Program to check given number

#include <iostream>
using namespace std;
void checkprime(int);
void allprime();
int main()
{
    int num;
    cout << "Enter any number";
    cin >> num;
    checkprime(num);
    cout << "\n---------\nPrime from 1 to 100 is:\n";
    allprime();
    return 0;
}
void checkprime(int N)
{
    int i = 2;
    while (i <= N)
    {
        if (N % i == 0)
            break;
        i++;
    }
    if (N == i)
        cout << " " << N << "Is Prime Number";
    else
        cout << " " << N << "Is Not Prime Number";
}
void allprime()
{
    int i, j;
    for (i = 1; i <= 100; i++)
    {
        for (j = 2; j <= i; j++)
        {
            if (i % j == 0)
                break;
        }
        if (i == j)
        {
            cout << i << " "
                 << "Is Prime"
                 << " ";
        }
    }
}