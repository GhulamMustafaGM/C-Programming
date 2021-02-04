// Revert Program

#include <iostream>
using namespace std;
void revert(int &num, int last = 2)
{
    last = (last % 2 == 0) ? last + 1 : last - 1;
    for (int c = 1; c <= last; c++)
        num += c;
}

int main()
{
    int a = 20, b = 4;
    revert(a, b);
    cout << a << "&" << b << endl;
    b--;
    revert(a, b);
    cout << a << "#" << b << endl;
    revert(b);
    cout << a << "#" << b << endl;
    return 0;
}