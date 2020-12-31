/* This program shows the difference a register variable
can make to the speed of program execution.
*/

#include <iostream>
#include <ctime>

using namespace std;

unsigned int i; // non-register
unsigned int delay;
int main()
{
    register unsigned int j;

    long start, end;
    start = clock();
    for (delay = 0; delay < 50; delay++)
        for (i = 0; i < 64000000; i++)
            ;
    end = clock();
    cout << "Number of clock ticks for non-register loop: ";
    cout << end - start << '\n';
    start = clock();
    for (delay = 0; delay < 50; delay++)
        for (j = 0; j < 64000000; j++)
            ;
    end = clock();
    cout << "Number of clock ticks for register loop: ";
    cout << end - start << '\n';
    return 0;
}

/* Output: 

Number of clock ticks for non-register loop: 5622
Number of clock ticks for register loop: 935

*/