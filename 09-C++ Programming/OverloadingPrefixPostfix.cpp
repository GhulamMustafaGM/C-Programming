// Overloading prefix and postfix

#include <iostream>

class Integer
{
private:
    int v, incr;

public:
    Integer() : v(0) {}
    Integer(int value) : v(value) { incr = 1; }
    operator int() { return v; }
    void set_incr(int val) { incr = val; }
    Integer operator++() { return v += incr; }
    Integer operator++(int)
    {
        v += incr;
        return v - incr;
    }
};

int main()
{
    Integer x(3);
    x.set_incr(2);
    std::cout << ++x << " ";
    std::cout << x << " ";
    std::cout << x++ << " ";
    std::cout << x << "\n";

    x = 3;
    x.set_incr(3);
    std::cout << ++x << " ";
    std::cout << x << " ";
    std::cout << x++ << " ";
    std::cout << x << "\n";

    x = 3;
    x.set_incr(100);
    std::cout << ++x << " ";
    std::cout << x << " ";
    std::cout << x++ << " ";
    std::cout << x << "\n";

    Integer i = 0;
    i.set_incr(5);

    for (; i < 50; i++)
        std::cout << i << " ";
}