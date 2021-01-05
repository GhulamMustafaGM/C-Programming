// Divisible or not

#include <iostream>
using namespace std;
int main()
{
    int n, y, x;
    cin >> n >> x >> y;
    if ((n % x == 0) && (n % y == 0))
        cout << "n is divisible by x and y";
    else
        cout << "n is not divisible by x and y.";
    return 0;
}

/* output

45 9
9
n is divisible by x and y

*/