#include <iostream>
using namespace std;

int sqr_it(int x);

int main()
{
    int t = 10;

    cout << sqr_it(t) << ' ' << t;

    return 0;
}
int sqr_it(int x)
{
    x = x * x;
    return x;
}

/* output:

100 10

*/