// An example of explicit keyword

#include <iostream>
using namespace std;

class myclass
{
    int a;

public:
    explicit myclass(int x) { a = x; }
    int geta() { return a; }
};

int main()
{
    myclass ob(110);

    cout << ob.geta();
    cout << endl;
}

/* Output:

110

*/