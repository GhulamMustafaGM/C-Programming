/* C++ program - find largest of two numbers */
#include <iostream>
using namespace std;
int main()
{
    int a, b, big;

    cout << "\nEnter two numbers: ";
    cin >> a >> b;

    if (a > b)
    {
        big = a;
    }
    else
    {
        big = b;
    }
    cout << "Biggest of the two number is " << big;
    cout << endl;

    return 0;
}

/*output 

Enter two numbers: 3 4
Biggest of the two number is 4

*/