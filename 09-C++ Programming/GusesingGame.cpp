// Gasic guessing game

#include <iostream>
using namespace std;

int main()
{
    srand(time(0));

    int guess = (1 + rand() % 20);
    int input;

    cout << "enter a number between 1 and 20\n";
    cin >> input;

    if (input == guess)
        cout << "you guessed right\n";

    if (input > guess)
        cout << "your number is too big\n";

    if (input < guess)
        cout << "your number is too small\n";

    else
        cout << guess << endl;

    return 0;
}