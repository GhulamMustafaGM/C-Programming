// Explicit Constructors

#include <iostream>
using namespace std;

class myclass
{
    int a;

public:
    myclass(int x) { a = x; }
    int geta() { return a; }
};

int main()
{
    myclass ob(4);

    cout << ob.geta();
    cout << endl;

    return 0;
}

/* Output;

4

*/