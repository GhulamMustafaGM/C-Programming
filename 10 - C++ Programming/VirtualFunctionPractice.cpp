// Practice code, virtual in cpp

#include <iostream>
using namespace std;

class A
{
public:
    virtual int calculate()
    {
        return 1;
    };
};

class B : public A
{
public:
    virtual int calculate()
    {
        return 2;
    }
};

class C : public B
{
public:
    virtual int calculate()
    {
        return 3;
    }
};

int main()
{
    int Result = 0;
    A *Objs[3];
    Objs[0] = new A();
    Objs[1] = new B();
    Objs[2] = new C();
    for (int i = 0; i < 3; i++)
        Result += Objs[i]->calculate();
    cout << Result << endl;
    return 0;
}
