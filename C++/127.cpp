#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int i, min_value, max_value;
    int list[10];

    for (i = 0; i < 10; i++)
        list[i] = rand();

    // find minimum value
    min_value = list[0];
    for (i = 1; i < 10; i++)
        if (min_value > list[i])
            min_value = list[i];

    cout << "minimum value: " << min_value << endl;

    // fin maximum value

    max_value = list[0];
    for (i = 1; i < 10; i++)
        if (max_value < list[i])
            cout << "maximum value: " << max_value << endl;
    return 0;
}

/* 
minimum value: 41
maximum value: 29358

*/