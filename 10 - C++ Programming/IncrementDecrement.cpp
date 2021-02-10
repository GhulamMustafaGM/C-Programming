// Increment decrement and reference

#include <iostream>
using namespace std;

class A
{
private:
    int x = 6;
    int y;

public:
    void foo(int x) { cout << ++x; }
    void ref(int &x) { cout << x; }
    void print()
    {
        y = x--;
        cout << y - x;
    }
};

int main()
{

    A a;
    int b = 12;

    a.foo(3);
    a.print();
    a.ref(b);

    return 0;
}