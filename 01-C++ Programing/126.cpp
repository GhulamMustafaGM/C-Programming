#include <iostream>
using namespace std;

int main()
{
    int sample[10]; // this reserves 10 integer elements
    int t;

    // load the array

    for (t = 0; t < 10; ++t)
        sample[t] = 6;

    // display the array
    for (t = 0; t < 10; ++t)
        cout << sample[t] << ' ';

    return 0;
}

/* 
0 1 2 3 4 5 6 7 8 9

*/