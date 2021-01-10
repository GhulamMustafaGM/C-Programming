// Drawing a circle

//A circle(which looks like an ellipse ^^;)
#include <iostream>
#include <cmath>
using namespace std;

void f(int y, int x[2], unsigned int r);

/*
    The radius is "r".
    -r <= y <= r
    -r <= x <= r
    
    x^2 * y^2 = r^2
          x^2 = r^2 - y^2
              = (r-y)(r+y)
            x = +-sqrt((r-y)(r+y))
*/

int main()
{
    const int r = 10;
    for (int y = -r; y <= r; ++y)
    {
        int x[2];
        f(y, x, r);
        x[0] += r;
        x[1] += r;

        if (x[0] == x[1])
            cout << string(x[0], ' ') << "*" << endl;
        else
            cout << string(x[0], ' ') << "*"
                 << string(x[1] - x[0], ' ') << "*"
                 << endl;
    }
    return 0;
}

void f(int y, int x[2], unsigned int r)
{
    x[0] = -sqrt((r - y) * (r + y));
    x[1] = +sqrt((r - y) * (r + y));

    //x[0] <= x[1]
}