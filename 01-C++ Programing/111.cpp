#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num;
    double sq_root;

    for (num = 1; num < 10; num++)
    {
        sq_root = sqrt((double)num);

        cout << num << " " << sq_root << endl;
    }
    return 0;
}

/* output

1 1
2 1.41421
3 1.73205
4 2
5 2.23607
6 2.44949
7 2.64575
8 2.82843
9 3

*/