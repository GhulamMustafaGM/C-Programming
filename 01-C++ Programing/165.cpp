#include <iostream>
using namespace std;

void display(int num);

int main(int argc, char const *argv[])
{
    int t[10], i;

    for (i = 0; i < 10; ++i)
        t[i] = i;
    for (i = 0; i < 10; i++)
        display(t[i]);
    return 0;
}

// Print some numbers.
void display(int num)
{
    cout << num << ' ';
}

/* output: 

0 1 2 3 4 5 6 7 8 9

*/