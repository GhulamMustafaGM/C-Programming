
#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;

char *fortunes[]{
    "Soon, you will come into some money. \n",
    "A new love will enter your life.\n",
    "You will live long and prosper. \n",
    "Now is a good time to invest for the future.\n",
    "A close friend will as for a favor. \n"};

int main()
{
    int chance;

    cout << "To see eyour fortune, press a key: ";

    // randomize the random number generator

    while (!kbhit())
        rand();

    cout << endl;

    chance = rand();
    chance = chance % 5;
    cout << fortuness[chance];

    return 0;
}S