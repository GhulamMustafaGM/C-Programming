// true or false in c++

#include <iostream>
using namespace std;

int main()
{
    double a, b;
    a = 0.2;
    b = 0.3;
    double c = b - a; //c = 0.1

    cout << "c = " << c << endl;

    if (c == 0.1)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }

    return 0;
}