#include <iostream>

using namespace std;

int main()
{
    bool bin(true);
    int n(0), nC(0);
    cin >> n;
    nC = n;
    do
    {
        if ((n % 10 != 0) && (n % 10 != 1))
        {
            bin = false;
            break;
        }
        n /= 10;
    } while (n != 0);
    if (bin == true)
        cout << nC << " is binary" << endl;
    else
        cout << nC << " is not binary" << endl;
    return 0;
}