// This program displays the current system time.

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    struct tm *ptr;
    time_t lt;
    lt = time('\0');
    ptr = localtime(&lt);
    cout << asctime(ptr);

    return 0;
}

/* output:

Sun Apr 08 03:34:18 2018

*/