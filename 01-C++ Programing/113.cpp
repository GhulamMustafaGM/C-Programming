#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i;
    // print numbers until a key is pressed
    for (i = 0; !kbhit(); i++)
        cout << i << ' ';
    return 0;
}