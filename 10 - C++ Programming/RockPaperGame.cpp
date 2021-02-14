// Rock paper scissors

#include <iostream>
#include <ctime>
using namespace std;
void game();
//starts the automated rock paper scissor game
char rps();
// bot that youre playing against

int main()
{
    cout << "Best 2 out of 3 Rock paper scissors game" << endl;
    srand(time(NULL));
    game();

    return 0;
}

char rps()
{
    char arr[3] = {'R', 'S', 'P'};
    int hand = rand() % 3;
    return arr[hand];
}

void game()
{
    int x = 0;
    int y = 0;
    int i = 0;

    cout << "Lets play R)ock, P)aper, S)cissors \n\n";
    /*do
    {*/
    while ((x < 2) && (y < 2))
    {
        char input = rps();
        char bot = rps();

        cout << "Players Hand: \n";
        cout << endl;
        /*if(input != 'R' || 'P' || 'S')
         {
             cout << "wrong input" << endl;
             break;
         }*/
        if (input == bot)
        {
            cout << "Player1 hand: " << input << endl;
            cout << "Player2 hand:" << bot << endl
                 << endl;
            cout << "Tie!! play again" << endl
                 << endl;
            cout << "player1score: " << x << endl;
            cout << "player2score: " << y << endl
                 << endl;
        }
        else if ((input == 'R') && (bot == 'S'))
        {
            cout << "Player1 hand: " << input << endl;
            cout << "Player2 hand:" << bot << endl
                 << endl;
            cout << "Rock beats Scissors, player1 gets a dub" << endl;
            x++;
            cout << "player1score: " << x << endl;
            cout << "player2score: " << y << endl
                 << endl;
        }
        else if ((input == 'P') && (bot == 'R'))
        {
            cout << "Player1 hand: " << input << endl;
            cout << "Player2 hand:" << bot << endl
                 << endl;
            cout << "Paper beats Rock, player1 gets a dub" << endl;
            x++;
            cout << "player1score: " << x << endl;
            cout << "player2score: " << y << endl
                 << endl;
        }
        else if ((input == 'S') && (bot == 'P'))
        {
            cout << "Player1 hand: " << input << endl;
            cout << "Player2 hand:" << bot << endl
                 << endl;
            cout << "Scissor beats Paper, player1 gets a dub" << endl;
            x++;
            cout << "player1score: " << x << endl;
            cout << "player2score: " << y << endl
                 << endl;
        }
        else if ((input == 'R') && (bot == 'P'))
        {
            cout << "Player1 hand: " << input << endl;
            cout << "Player2 hand:" << bot << endl
                 << endl;
            cout << "Paper beats Rock, player2 gets a dub" << endl;
            y++;
            cout << "player1score: " << x << endl;
            cout << "player2score: " << y << endl
                 << endl;
        }
        else if ((input == 'S') && (bot == 'R'))
        {
            cout << "Player1 hand: " << input << endl;
            cout << "Player2 hand:" << bot << endl
                 << endl;
            cout << "Rock beats Scissors, player2 gets a dub" << endl;
            y++;
            cout << "player1score: " << x << endl;
            cout << "player2score: " << y << endl
                 << endl;
        }
        else if ((input == 'P') && (bot == 'S'))
        {
            cout << "Player1 hand: " << input << endl;
            cout << "Player2 hand:" << bot << endl
                 << endl;
            cout << "Scissor beats Paper, player2 gets a dub" << endl;
            y++;
            cout << "player1score: " << x << endl;
            cout << "player2score: " << y << endl
                 << endl;
        }
    }

    if (x > y)
    {
        cout << "player1 Wins!!" << endl;
    }
    else if (x < y)
    {
        cout << "player2 Wins!!" << endl;
    }
    else if (x == y)
    {
        cout << "no winner, these two think alike" << endl;
    }

    /*cout<<"Press Y or y to play again,               any other ends the game."               <<endl;
        cin>>user;
                
         
    }while((user == 'Y') || (user == 'y'));*/
}
