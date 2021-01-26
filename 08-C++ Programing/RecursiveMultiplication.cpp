// Recursive multiplication

#include <iostream>
    using namespace std;

int mult(int x, int y)
{
    if (x < 0)
        return -mult(-x, y);
    else if (x > 0)
        return y + mult(x - 1, y);
    else
        return 0;
}

int main()
{
    cout << mult(-10, -5);

    return 0;
}