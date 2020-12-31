// Use overloaded constructors.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class timer
{
    int seconds;

public:
    // seconds specified as a string

    timer(char *t) { seconds = atoi(t); }

    // seconds specified as integer

    timer(int t) { seconds = t; }

    // time specified in minutes and seconds

    timer(int min, int sec) { seconds = min * 60 + sec; }
    void run();
};
void timer::run()
{
    clock_t t1;
    t1 = clock();
    while ((clock() / CLOCKS_PER_SEC - t1 / CLOCKS_PER_SEC) < seconds)
        ;
    cout << "\a"; // ring the bell
}
int main()
{
    timer a(10), b("20"), c(1, 10);
    a.run(); // count 10 seconds
    b.run(); // count 20 seconds
    c.run(); // count 1 minute, 10 seconds

    return 0;
}

/* Output:

No output here.

*/