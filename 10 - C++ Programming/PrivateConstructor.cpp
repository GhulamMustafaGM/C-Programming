// private constructor

// Usage of private constructor

#include <iostream>
    using namespace std;

class baseClass
{

private:
    baseClass()
    {
        cout << "baseClass's constructor\n";
    }

    friend class friendClass;
};

class friendClass
{

public:
    friendClass()
    {
        baseClass baseObject;
        cout << "friendClass's constructor\n";
    }
};

int main()
{

    friendClass friendObject;

    return 0;
}
