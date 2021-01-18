// Overloaded

#include <iostream>
using namespace std;

class MyClass
{
public:
    MyClass();
    MyClass(int);
    ~MyClass();
};

MyClass::MyClass()
{
    cout << "Constructor 1" << endl;
}

MyClass::MyClass(int x)
{
    cout << "Constructor 2" << endl;
}

MyClass::~MyClass()
{
    cout << "Destructor" << endl;
}

int main()
{

    MyClass obj; // calls overloaded constructor 2
    
}