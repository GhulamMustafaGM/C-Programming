// Nuclear battleship

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//run_game function prototype
void run_game(int row1, int row2, int row3, int col1, int col2, int col3);

/*
 * The main function displays the game menu allowing users to select debug or
 * regular mode. Depending on the selection, main seeds a randomizer. Main
 * also displays instructions common to both modes. Main also generates
 * appropriate ship coordinates. It then calls the game function.
 *****************************************************************************/
int main()
{
    //declare user choice variable
    char choice;

    //declare ship coordinates
    int row1, col1;
    int row2, col2;
    int row3, col3;

    //output menu
    do
    {
        cout << "Nuclear Battleship - where getting close is good enough!"
             << endl;
        cout << "Please, enter D for debug mode or R for regular mode: ";
        cin >> choice;
        choice = toupper(choice);
    } while (choice != 'D' && choice != 'R');

    //debug mode
    if (choice == 'D')
    {

        //seed the randomizer
        srand(10);
    }

    //regular mode
    if (choice == 'R')
    {

        //seed the randomizer
        srand((unsigned)time(NULL));
    }

    //display instruction
    cout << "Select your shot location on a 10x10 grid." << endl;
    cout << "Shots on or adjacent to target destroy it." << endl;
    cout << endl;

    //generate 3 ship coordinates
    row1 = rand() % 10 + 1;
    col1 = rand() % 10 + 1;
    row2 = rand() % 10 + 1;
    col2 = rand() % 10 + 1;
    row3 = rand() % 10 + 1;
    col3 = rand() % 10 + 1;

    if (choice == 'D')
    {

        //display ship coordinates
        cout << "Ships at: " << endl;
        cout << row1 << ", " << col1 << endl;
        cout << row2 << ", " << col2 << endl;
        cout << row3 << ", " << col3 << endl;
        cout << endl;
    }

    //run the game
    run_game(row1, row2, row3, col1, col2, col3);

    return 0;
}