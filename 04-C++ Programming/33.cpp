// a-b^2 program

#include <iostream>
using namespace std;

class Mathematics
{
    int a, b;

public:
    void input()
    {
        cout << "Input a:\n";
        cin >> a;
        cout << "Input b:\n\n";
        cin >> b;
    }

    void add()
    {
        cout << "(a-b)^2 = " << ((a * a) - (2 * a * b) + (b * b));
    }
};

int main()
{
    Mathematics m; // Creating object of class

    m.input();
    m.add();

    return 0;
}

/* Output:

Input a:
4
Input b:

2
(a-b)^2 = 4

*/