// Virtual destructor

#include <iostream>
using namespace std;
class base
{
public:
    base() { cout << "\nBase constructor"; }
    virtual print() { cout << "\nBase class print"; }
    virtual ~base() { cout << "\nBase destructure"; }
};
class derive : public base
{
public:
    derive() { cout << "\nDerive constructure"; }
    print() { cout << "\nDerive class print"; }
    ~derive() { cout << "\nDerive destructure"; }
};
int main()
{
    base *b1 = new derive();
    b1->print();
    delete b1;
    return 0;
}