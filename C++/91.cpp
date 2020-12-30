// A simple program that demonstrates mul().

#include <iostream>
using namespace std;

void mul(int x, int y); // mul()'s prototype'

int main()
{
    mul(10, 20);
    mul(5, 6);
    mul(8, 9);

    cout << endl;
    return 0;
}

void mul(int x, int y) // an argument is called parameter.
{
    cout << x * y << "\n ";
}

/* output:

200 30 72

*/