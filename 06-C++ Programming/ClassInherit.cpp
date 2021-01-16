// Class inherit

#include <iostream>
using namespace std;

class A
{
public:
    A() { cout << 1 << endl; };
};

class B : A
{
public:
    B() { cout << 2 << endl; };
};

class C : B
{
public:
    C() { cout << 3 << endl; };
};

int main()
{
    A a;
    cout << endl;
    B b;
    cout << endl;
    C c;
    // return 0;
}