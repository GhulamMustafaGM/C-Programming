// Determine odd or Even numbers

#include <iostream>
using namespace std;

int main()
{

    int x = 0;

    cin >> x;

    if (x % 2 == 0)

        cout << x << " is even.";

    if (x % 2 != 0)

        cout << x << " is odd.";

    return 0;
}