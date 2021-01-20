// Find spy numbers between two numbers

#include <iostream>
using namespace std;
void swap(long int &a, long int &b)
{
    long int c;
    c = a;
    a = b;
    b = c;
}
bool isSpy(long int n)
{
    int sum = 0, product = 1, d;
    long int num = n;
    while (n != 0 && num / 10 != 0)
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
    long int n1 = 0, n2 = 0, no, spy_no = 0;
    cout << "Enter the numbers\n";
    cin >> n1 >> n2;
    if (n1 > n2)
        swap(n1, n2);
    cout << n1 << "   " << n2 << endl
         << endl;
    cout << "Spy Numbers are\n";
    for (no = n1; no <= n2; no++)
        if (isSpy(no))
        {
            cout << no << " ";
            spy_no++;
        }
    cout << endl;
    if (spy_no != 0)
        cout << spy_no << " Spy Numbers found";
    else
        cout << "No Spy Number found";
    return 0;
}