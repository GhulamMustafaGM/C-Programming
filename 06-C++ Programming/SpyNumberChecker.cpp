#include <iostream>
using namespace std;
bool isSpy(long int n)
{
    int sum = 0, product = 1, d;
    while (n != 0)
    {
        d = n % 10;
        sum += d;
        product *= d;
        n /= 10;
    }
    if (sum == product)
        return true;
    else
        return false;
}
int main()
{
    long int no;
    cout << "Enter the number\n";
    cin >> no;
    cout << no << endl
         << endl;
    if (no > -9 && no < 9)
    {
        cout << "Not Spy Number";
        return 0;
    }
    if (isSpy(no))
        cout << "Spy Number";
    else
        cout << "Not Spy Number";
    return 0;
}