// Simple Game

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Enter a number between 1 & 5!!

int main()
{

    srand(time(0));
    int bot = (rand() % 5) + 1;

    int k;
    cin >> k;

    if (k == bot)
    {

        cout << "Impressive!" << endl;
    }

    else
    {
        cout << "Guess again.." << endl;
    }

    cout << endl;

    cout << "you guessed: ";

    cout << k << endl;

    cout << "The computer generated: ";
    cout << bot;

    return 0;
}