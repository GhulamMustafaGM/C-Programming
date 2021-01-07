#include <iostream>
using namespace std;

class X
{
private:
    int x, y;

public:
    X() : x(0), y(0) {}
    void show() { cout << x << y; }
    X &operator()(int dx, int dy)
    {
        x = dx - 1;
        y = dy + 1;
        return *this;
    }
};

int main()
{
    X pt;
    pt(3, 2);
    pt.show();
    return 0;
}