// using continue

#include <iostream>
using namespace std;

int main()
{
    int x;

    for (x = 0; x <= 100; x++)
    {
        if (x % 2)
            continue;
        cout << x << ' ';
    }
    return 0;
}

/* 

0 2 4 6 8 10

*/