/* Write a program that calculates a random number 1 through 100. The program then asks the user to guess the number.
    If the user guesses too high or too low then the program should output "too high" or "too low" accordingly.
    The program must let the user continue to guess until the user correctly guesses the number.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

    //Variable declaration
    int uGuess = 0;
    int cSecret;
    int counter = 0;
    char play = 'y';

    //Real random number based on time.
    srand(time(0));

    while (play == 'Y' || play == 'y')
    { //Biggest loop, while check that "play" still get a Y || y char.
        //Random number is defined between 1 and 100.
        cSecret = rand() % 100 + 1;
        //Count every time the user test the program.
        counter = counter + 1;

        do
        { //do...while loop with if..else for bigger or low for compare cSecret random number.
            cout << "Please choose one number between 1 and 100! :  ";

            while (!(cin >> uGuess))
            { //Check the data and block other input difrent from integer.
                cout << "Please choose one number between 1 and 100! : \n";
                cin.clear();
                cin.ignore(100, '\n');
            }

            if (uGuess > cSecret)
            { //Test the input helping the user to reach the objective.
                cout << "                  ***** Too Hight! ***** \n";
            }
            else if (uGuess < cSecret)
            {
                cout << "                  ***** Too Low! ***** \n";
            }

        } while (uGuess != cSecret); //End the do...while loop.

        cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ Correct! \n";
        cout << ".........but you have taken " << counter << " times! \n";
        cout << "Let's play, press Y? \n";
        cin >> play;

    } //End the while loop.

    return 0;
}