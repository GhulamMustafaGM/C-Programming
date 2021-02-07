// tic tac toe

#include <iostream>
#include <cstdlib>

using namespace std;
char matrix[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

char player = 'X';
int choice;
int x;
/////////void draw starts////////////

void draw()
{

    cout
        << "  |  " << matrix[1] << "  |  " << matrix[2] << "  |  " << matrix[3] << "  |  \n"
        << endl;

    cout
        << "  |  " << matrix[4] << "  |  " << matrix[5] << "  |  " << matrix[6] << "  |  \n"
        << endl;

    cout
        << "  |  " << matrix[7] << "  |  " << matrix[8] << "  |  " << matrix[9] << "  |  \n"
        << endl;

    cout << "\n Enter a number:";
    cin >> choice;
}
///////////void draw ends///////////

//////////void logic starts/////////

void logic()
{

    if (choice == 1 && matrix[1] == '1')

        matrix[1] = player;

    else if (choice == 2 && matrix[2] == '2')

        matrix[2] = player;

    else if (choice == 3 && matrix[3] == '3')

        matrix[3] = player;

    else if (choice == 4 && matrix[4] == '4')

        matrix[4] = player;

    else if (choice == 5 && matrix[5] == '5')

        matrix[5] = player;

    else if (choice == 6 && matrix[6] == '6')

        matrix[6] = player;

    else if (choice == 7 && matrix[7] == '7')

        matrix[7] = player;

    else if (choice == 8 && matrix[8] == '8')

        matrix[8] = player;

    else if (choice == 9 && matrix[9] == '9')

        matrix[9] = player;
}

//////////////void logic ends////////////

/////////////void players starts///////////

void players()
{

    if (player == 'X')
        player = 'O';

    else
        player = 'X';
}

//////////void players ends////////////

/////////void check starts/////////////

char check()
{

    ///////player X ///////////

    if (matrix[1] == 'X' && matrix[2] == 'X' && matrix[3] == 'X')
        return 'X';

    else if (matrix[4] == 'X' && matrix[5] == 'X' && matrix[6] == 'X')
        return 'X';

    else if (matrix[7] == 'X' && matrix[8] == 'X' && matrix[9] == 'X')
        return 'X';

    else if (matrix[1] == 'X' && matrix[5] == 'X' && matrix[9] == 'X')
        return 'X';

    else if (matrix[3] == 'X' && matrix[5] == 'X' && matrix[7] == 'X')
        return 'X';

    else if (matrix[2] == 'X' && matrix[5] == 'X' && matrix[8] == 'X')
        return 'X';

    else if (matrix[1] == 'X' && matrix[4] == 'X' && matrix[7] == 'X')
        return 'X';

    else if (matrix[3] == 'X' && matrix[6] == 'X' && matrix[9] == 'X')
        return 'X';

    /////////player O ////////////

    if (matrix[1] == 'O' && matrix[2] == 'O' && matrix[3] == 'O')
        return 'O';

    else if (matrix[4] == 'O' && matrix[5] == 'O' && matrix[6] == 'O')
        return 'O';

    else if (matrix[7] == 'O' && matrix[8] == 'O' && matrix[9] == 'O')
        return 'O';

    else if (matrix[1] == 'O' && matrix[5] == 'O' && matrix[9] == 'O')
        return 'O';

    else if (matrix[3] == 'O' && matrix[5] == 'O' && matrix[7] == 'O')
        return 'O';

    else if (matrix[2] == 'O' && matrix[5] == 'O' && matrix[8] == 'O')
        return 'O';

    else if (matrix[1] == 'O' && matrix[4] == 'O' && matrix[7] == 'O')
        return 'O';

    else if (matrix[3] == 'O' && matrix[6] == 'O' && matrix[9] == 'O')
        return 'O';

    return '/';
    /////////void check ends///////////
}

int main()
{
    int f = 1;

    do
    {

        draw();

        logic();

        players();

        check();

        if (check() == 'X')
        {

            cout << "\n\n \t (player X wins)" << endl;
            break;
        }
        else if (check() == 'O')
        {

            cout << "\n\n \t (player O wins)" << endl;
            break;
        }

        if (matrix[1] != '1' && matrix[2] != '2' && matrix[3] != '3' && matrix[4] != '4' && matrix[5] != '5' && matrix[6] != '6' && matrix[7] != '7' && matrix[8] != '8' && matrix[9] != '9')

        {
            cout << "it's draw !" << endl;

            break;
        }

        system("clear");

    } while (f != 0);

    return 0;
}
