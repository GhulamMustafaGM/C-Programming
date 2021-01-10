// Challenge: Fun with digits

#include <iostream>
#include <string>
using namespace std;

void f(int r, int i, int j, string s)
{
    if (j < 10)
    {
        char b[16];
        f(r + i, j, j + 1, s + "+" + itoa(j, b, 10));
        f(r + i, -j, j + 1, s + "-" + itoa(j, b, 10));
        f(r, i * 10 + (i > 0 ? j : -j), j + 1, s + itoa(j, b, 10));
    }
    else
    {
        if (r + i == 100)
            cout << s << " = " << r + i << endl;
    }
}

int main()
{
    f(0, 1, 2, "1");
    return 0;
}