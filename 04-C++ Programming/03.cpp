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

void run_game(int row1, int row2, int row3, int col1, int col2, int col3)
{
    int userrow;
    int usercol;
    int num_guesses = 0;

    //get user coordinate guesses until ships are destroyed
    while (row1 != -5 && col1 != -5 || row2 != -5 && col2 != -5 || row3 != -5 && col3 != -5)
    {

        //increment number of guesses each iteration of the loop
        num_guesses++;

        //get user coordinate guesses
        cout << "Enter shot row and column (1-10)" << endl;
        cout << "row: ";
        cin >> userrow;
        cout << "column: ";
        cin >> usercol;

        //if user guesses coordinates of ship 1
        if (userrow == row1 && usercol == col1)
        {
            cout << "Direct hit on ship 1" << endl;
            row1 = -5;
            col1 = -5;
        }
        if (abs(userrow - row1) == 1 && abs(usercol - col1) == 1)
        {
            cout << "Hit ship 1" << endl;
            row1 = -5;
            col1 = -5;
        }
        if (abs(userrow - row1) == 1 && usercol == col1)
        {
            cout << "Hit ship 1" << endl;
            row1 = -5;
            col1 = -5;
        }
        if (userrow == row1 && abs(usercol - col1) == 1)
        {
            cout << "Hit ship 1" << endl;
            row1 = -5;
            col1 = -5;
        }
        if (abs(userrow - row1) == 2 && abs(usercol - col1) == 2)
        {
            cout << "Near miss on ship 1" << endl;
        }
        if (abs(userrow - row1) == 1 && abs(usercol - col1) == 2)
        {
            cout << "Near miss on ship 1" << endl;
        }
        if (abs(userrow - row1) == 2 && abs(usercol - col1) == 1)
        {
            cout << "Near miss on ship 1" << endl;
        }
        if (userrow == row1 && abs(usercol - col1) == 2)
        {
            cout << "Near miss on ship 1" << endl;
        }
        if (abs(userrow - row1) == 2 && usercol == col1)
        {
            cout << "Near miss on ship 1" << endl;
        }

        //if user guesses coordinates of ship 2
        if (userrow == row2 && usercol == col2)
        {
            cout << "Direct hit on ship 2" << endl;
            row2 = -5;
            col2 = -5;
        }
        if (abs(userrow - row2) == 1 && abs(usercol - col2) == 1)
        {
            cout << "Hit ship 2" << endl;
            row2 = -5;
            col2 = -5;
        }
        if (abs(userrow - row2) == 1 && usercol == col2)
        {
            cout << "Hit ship 2" << endl;
            row2 = -5;
            col2 = -5;
        }
        if (userrow == row2 && abs(usercol - col2) == 1)
        {
            cout << "Hit ship 2" << endl;
            row2 = -5;
            col2 = -5;
        }
        if (abs(userrow - row2) == 2 && abs(usercol - col2) == 2)
        {
            cout << "Near miss on ship 2" << endl;
        }
        if (abs(userrow - row2) == 1 && abs(usercol - col2) == 2)
        {
            cout << "Near miss on ship 2" << endl;
        }
        if (abs(userrow - row2) == 2 && abs(usercol - col2) == 1)
        {
            cout << "Near miss on ship 2" << endl;
        }
        if (abs(userrow - row2) == 2 && usercol == col2)
        {
            cout << "Near miss on ship 2" << endl;
        }
        if (userrow == row2 && abs(usercol - col2) == 2)
        {
            cout << "Near miss on ship 2" << endl;
        }

        //if user guesses coordinates of ship 3
        if (userrow == row3 && usercol == col3)
        {
            cout << "Direct hit on ship 3" << endl;
            row3 = -5;
            col3 = -5;
        }
        if (abs(userrow - row3) == 1 && abs(usercol - col3) == 1)
        {
            cout << "Hit ship 3" << endl;
            row3 = -5;
            col3 = -5;
        }
        if (userrow == row3 && abs(usercol - col3) == 1)
        {
            cout << "Hit ship 3" << endl;
            row3 = -5;
            col3 = -5;
        }
        if (abs(userrow - row3) == 1 && usercol == col3)
        {
            cout << "Hit ship 3" << endl;
            row3 = -5;
            col3 = -5;
        }
        if (abs(userrow - row3) == 2 && abs(usercol - col3) == 2)
        {
            cout << "Near miss on ship 3" << endl;
        }
        if (abs(userrow - row3) == 1 && abs(usercol - col3) == 2)
        {
            cout << "Near miss on ship 3" << endl;
        }
        if (abs(userrow - row3) == 2 && abs(usercol - col3) == 1)
        {
            cout << "Near miss on ship 3" << endl;
        }
        if (userrow == row3 && abs(usercol - col3) == 2)
        {
            cout << "Near miss on ship 3" << endl;
        }
        if (abs(userrow - row3) == 2 && usercol == col3)
        {
            cout << "Near miss on ship 3" << endl;
        }

        cout << endl;
    }
    //when all ships are destroyed display number of shots
    cout << "All ships destroyed. It took you " << num_guesses << " shots."
         << endl;
}