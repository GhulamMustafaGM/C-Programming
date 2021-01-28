// reinterpret<cst>

#include <iostream>

    class A
{
public:
    int a;
    A() { a = 0; }
};
class B
{
public:
    int b;
    B() { b = 0; }
};

int main()
{
    A *aptr = new A();
    B *bptr = new B();

    bptr->b = 10;
    // aptr = static_cast<A*>(bptr); Error
    aptr = reinterpret_cast<A *>(bptr);

    std::cout << aptr->a;

    return 0;
}