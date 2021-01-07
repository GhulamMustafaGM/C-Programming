// Swap reference pointers

#include <iostream>
using namespace std;

void swap_var(int x, int y);

void swap_ref(int &x, int &y);

void swap_pointer(int *x, int *y);
int main()
{
    int a, b;
    int *x = &a;
    int *y = &b;
    int &p = a;
    int &q = b;
    while (cin >> a >> b)
    {
        cout << "input:\n"
             << "a=" << a << " b=" << b << endl;

        swap_var(a, b);
        cout << "swap var:\n";
        cout << "a=" << a << " b=" << b << endl;

        swap_pointer(x, y);
        cout << "swap pointer:\n";
        cout << "a=" << a << " b=" << b << endl;

        swap_ref(p, q);
        cout << "swap reference:\n";
        cout << "a=" << a << " b=" << b << endl;
    }
    return 0;
}

void swap_var(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = x;
}

void swap_ref(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

void swap_pointer(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
