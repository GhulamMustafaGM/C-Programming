#include <iostream>
#include <ctime>
#include <cstdlib>
#include <ctime>
#include <sstream>

using namespace std;
string type[10] = {"skeleton", "troll", "knight", "prince", "astronaut", "pirate", "magician", "soldier", "giant", "hunter"};
string adjective[10] = {"tiny", "big", "large", "fat", "yellow", "blue", "dopey", "fast", "red", "green"};
string behavior[10] = {"creepy", "vicous", "excited", "nervous", "talkative", "dumb", "smart", "awkward", "poor", "puny"};

int main()
{
    srand(time(NULL));
    int chooseT = (rand() % 10);
    srand(time(NULL));
    int chooseA = (rand() % 10);
    srand(time(NULL));
    int chooseB = (rand() % 10);

    cout << "You hop out of The Cauldron as a " << adjective[chooseA] << " " << behavior[chooseB] << " " << type[chooseT];
    return 0;
}