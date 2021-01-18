// Call protected base method

#include <iostream>
using namespace std;

class Mother
{
public:
    Mother()
    {
        cout << "Mother ctor" << endl;
    }
    ~Mother()
    {
        cout << "Mother dtor" << endl;
    }

protected:
    void mom_func()
    {
        cout << "Mom func called" << endl;
    }
};

class Adam : public Mother
{
public:
    Adam()
    {
        cout << "Adam ctor" << endl;
        Mother::mom_func();
    }
};

int main()
{

    Adam obj;
}