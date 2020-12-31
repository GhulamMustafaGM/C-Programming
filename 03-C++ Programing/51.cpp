#include <iostream>
using namespace std;

class myclass
{
    int numA;
    int numB;

public:
    /* Initialize numA and numB inside the myclass constructor
		using normal syntax. */
    myclass(int x, int y)
    {
        numA = x;
        numB = y;
    }
    int getNumA() { return numA; }
    int getNumB() { return numB; }
};

int main()
{
    myclass ob1(7, 9), ob2(5, 2);

    cout << "Values in ob1 are " << ob1.getNumB() << " and " << ob1.getNumA() << endl;

    cout << "Values in ob2 are " << ob2.getNumB() << " and " << ob2.getNumA() << endl;
}

/* Output:

Values in ob1 are 9 and 7
Values in ob2 are 2 and 5

*/