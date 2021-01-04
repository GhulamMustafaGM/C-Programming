
// Lets play Rock, Paper, Scissor...

// Choose a number 1 , 2 or 3 and then enter Y or y then click on submit.
//Like that: 2y 1Y 3y
//Find last score with wins, loses ans ties

#include <iostream>
#include <cmath>
#include <time.h>
#include <cstdlib>
using namespace std;

int main()
{

    char ch;

    int win = 0;
    int tie = 0;
    int lose = 0;

    do
    {
        int choice;

        cout << "--------------------------------------" << endl;
        cout << "-- Lets play Rock, Paper, Scissors! --" << endl;
        cout << "--------------------------------------" << endl;

        cout << "Press 1 for Rock, 2 for Paper, 3 for Scissors:" << endl;
        cin >> choice;

        int ai = rand() % 3 + 1;
        cout << "The computer chose: " << ai << endl;

        if (choice == 1 && ai == 1)
        {
            cout << "Rock meets Rock its a tie!" << endl;
            tie++;
        }
        else if (choice == 1 && ai == 2)
        {
            cout << "Rock is covered by Paper the computer wins!." << endl;
            lose++;
        }
        else if (choice == 1 && ai == 3)
        {
            cout << "Rock crushes Scissors you win!" << endl;
            win++;
        }
        else if (choice == 2 && ai == 1)
        {
            cout << "Paper covers Rock you win!" << endl;
            win++;
        }
        else if (choice == 2 && ai == 2)
        {
            cout << "Paper meets Paper its a tie!" << endl;
            tie++;
        }
        else if (choice == 2 && ai == 3)
        {
            cout << "Paper is cut by Scissors the computer wins!" << endl;
            lose++;
        }
        else if (choice == 3 && ai == 1)
        {
            cout << "Scissors are crushed by Rock computer wins!" << endl;
            lose++;
        }
        else if (choice == 3 && ai == 2)
        {
            cout << "Scissors cuts Paper you win!" << endl;
            win++;
        }
        else if (choice == 3 && ai == 3)
        {
            cout << "Scissors meet Scissors its a tie!" << endl;
            tie++;
        }

        else
        {
            cout << "You didn't select 1, 2, or 3" << endl;
        }

        cout << "Wins: " << win << endl;
        cout << "Ties:" << tie << endl;
        cout << "Losses:" << lose << endl;
        cout << "Would you like to play again? Y/N" << endl;
        cin >> ch;
        system("CLS");
    } while (ch == 'Y' || ch == 'y');

    return 0;
}

/* output

--------------------------------------
-- Lets play Rock, Paper, Scissors! --
--------------------------------------
Press 1 for Rock, 2 for Paper, 3 for Scissors:
1
The computer chose: 2
Rock is covered by Paper the computer wins!.
Wins: 0
Ties:1
Losses:2
Would you like to play again? Y/N

*/