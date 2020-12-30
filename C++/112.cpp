#include <iostream>
using namespace std;

int main()
{
    int i;

    for (i = 20; i >= -20; i = i - 5)
        cout << i << ' ';
    return 0;
}

/* 
20 15 10 5 0 -5 -10 -15 -20
*/