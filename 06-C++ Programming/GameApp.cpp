
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

// Function to factorize an integer into all its positive divisors but itself
vector<int> factorize(int n)
{
    vector<int> factors;

    for (int iter = 1; iter <= n / 2; iter++)
    {
        if (n % iter == 0)
            factors.push_back(iter);
    }

    return factors;
}

int main()
{
    // Count how many times each player has won the game
    int firstWon = 0, secondWon = 0;

    // Loop that plays the game for 1,000 times
    for (int j = 0; j < 1e3; j++)
    {
        // Num is the number written on the board, and i shows whose turn it is
        int num = 2, i = 0;

        // Loop that stops the game when a number greater than 1990 is written on the board
        while (num < 1990)
        {
            // Randomize seed
            srand(time(NULL) + rand());

            // Factorize the number written on the board
            vector<int> factors = factorize(num);

            // If the sum of the number on the board and its greatest divisor is greater than 1990, win (happens for both player #1 and player #2, the catch is that player #2 never gets the chance!)
            if (num + factors.back() > 1990)
                num += factors.back();

            // If it's player #2's choice add a random divisor
            if (i % 2 == 1)
            {
                num += factors[rand() % factors.size()];
                i++;
            }

            // If not, add 1, since 1 is an odd divisor of all integers
            else
            {
                num += 1;
                i++;
            }
        }

        // If the game ends in odd turns, add to first player's wins
        if (i % 2 == 1)
        {
            firstWon++;
        }

        // If it ends in even turns, add to second player's wins
        else
        {
            secondWon++;
        }
    }
    cout << firstWon << " : " << secondWon << " ---> first player to second player " << endl; // Display the end result

    // Pause for input
    system("pause");
    return 0;
}