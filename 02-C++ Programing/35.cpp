// Demonstrate dynamic initialization.

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
    timer a(10);
    a.run();
    cout << "Enter number of seconds: ";
    char str[80];
    cin >> str;
    timer b(str); // initialize at run time
    b.run();
    cout << "Enter minutes and seconds: ";
    int min, sec;
    cin >> min >> sec;
    timer c(min, sec); // initialize at run time
    c.run();

    return 0;
}

/* output:


Enter number of seconds:

*/