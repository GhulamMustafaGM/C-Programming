// random

#include <iostream>
#include <random>
#include <time.h>
using namespace std;

int main()
{
    srand(time(0));
    int x;
    int y;
    rand();
    x = rand() % 10;
    y = rand() % 10;
    cout << "Rand_1: " << x << endl;
    cout << "Rand_2: " << y << endl;
    system("pause");
}
