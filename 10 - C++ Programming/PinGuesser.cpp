// Pin Guesser

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int pin[4];
    int guess;
    int pinGuess[4];
    int guessTimes = 0;
    for (int x = 0; x <= 3; x++)
    {
        cin >> pin[x];
    }

    for (int y = 0; y <= 3; y++)
    {
        do
        {
            guess = (rand() % 10);
            guessTimes++;
        } while (guess != pin[y]);

        pinGuess[y] = guess;
    }

    for (int f = 0; f <= 3; f++)
    {
        cout << pinGuess[f];
    }
    cout << endl
         << "It took tries: " << guessTimes;

    return 0;
}