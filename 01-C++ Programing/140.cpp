#include <iostream>
using namespace std;

int sqrs[10][2] = {
    {1, 1},
    {2, 4},
    {3, 9},
    {4, 16},
    {5, 25},
    {6, 36},
    {7, 49},
    {8, 64},
    {9, 81},
    {10, 100}};

int main()
{
    int i, j;

    cout << "Enter a number between 1 and 10:";
    cin >> i;

    // look up i

    for (j = 0; j < 10; j++)
        if (sqrs[j][0] == i)
            break;

    // display square

    cout << "The square of " << i << " is ";
    cout << sqrs[j][1];

    return 0;
}

/*

Enter a number between 1 and 10:5
The square of 5 is 25
*/