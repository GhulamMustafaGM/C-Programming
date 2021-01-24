// square by #define

#include <iostream>
using namespace std;
#define square(a) a *a

int main()
{
    int x;
    cin >> x;
    int y = square(x);
    cout << "The square of " << x << " = " << y;
    return 0;
}
