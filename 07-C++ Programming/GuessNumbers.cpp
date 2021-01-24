// Guess the number

#include <iostream>
#include <random>
#include <time.h>

/*Enter your number*/
bool greaterThan(int aNumber, int numberToGuess)
{
    return (aNumber < numberToGuess);
}

int main()
{
    srand(time(0));
    int max = 100;
    int min = 0;
    std::cout << "Try to find the good number between " << min << " and " << max << " included\n";

    int numberToGuess(0);
    do
    {
        numberToGuess = rand();
    } while (numberToGuess > max || numberToGuess < min);

    int numberTry(1);
    do
    {
        std::cin >> numberTry;
        if (greaterThan(numberTry, numberToGuess))
        {
            std::cout << "The number is greater !\n";
        }
        else if (!greaterThan(numberTry, numberToGuess) && numberTry != numberToGuess)
        {
            std::cout << "The number is lower !\n";
        }

    } while (numberTry != numberToGuess);

    std::cout << "Congrats you find the good one !\n";
}
