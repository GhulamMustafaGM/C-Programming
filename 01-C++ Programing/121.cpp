#include <iostream>
using namespace std;

int main()
{
    int t;

    // loops from 0 to 9, not to 100!

    for (t = 0; t < 10; t++)
    {
        if (t == 10)
            break;
        cout << t << ' ';
    }
    return 0;
}

/* 

0 1 2 3 4 5 6 7 8 9

*/