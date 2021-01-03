// Cricket Score system

#include <iostream>
#include <string.h>
#include <ctime>
#include <cstdlib>
using namespace std;
int multiply(int ball)
{
    srand(time(0));
    int bat, comguess;
    int i, sum = 0;
    ball *= 6;
    for (i = 1; i <= ball; i++)
    {
        comguess = (1 + (rand() % 6));
        cout << "\nBat the ball and score::\n";
        cin >> bat;
        if (bat == comguess)
        {
            cout << "\nYou're out\n";
            cout << "You scored" << sum;

            return sum;
        }
        else
            sum += bat;
    }
    cout << " Balls are over\n you scored::" << sum;
    return sum;
}

int complay(int balls)
{
    int sum = 0, i;
    int comguess1, comguess2;
    srand(time(0));
    balls *= 6;
    for (i = 1; i <= balls; i++)
    {
        comguess1 = (1 + (rand() % 6));
        comguess2 = (1 + (rand() % 6));
        if (comguess1 == comguess2)
        {
            cout << "\n Computer has scored::" << sum;
            return sum;
        }
        else
            sum += comguess1;
    }
    cout << "\n Computer has scored::" << sum;
    return sum;
}

int main()
{
    cout << "-----------WELCOME TO CRICKET GAME-----------\n";
    string name1, name2;
    int sum1, sum2, overs, z, x;
    cout << "1.single player\n2.multiplayer\n3.help\n";
    cin >> x;
    if (x == 1)
    {
        cout << "Enter your name\n";
        cin >> name1;
        cout << "Enter number of overs\n";
        cin >> overs;
        sum1 = complay(overs);
        sum2 = multiply(overs);
        if (sum1 > sum2)
            cout << "YOU LOST\n";
        else if (sum1 < sum2)
            cout << "YOU WON";
        else
            cout << "DRWA\n";
    }

    else if (x == 2)
    {

        cout << "Enter name of player1::\n";
        cin >> name1;
        cout << "PLEASE!!! enter name of player2 \n";
        cin >> name2;
        cout << "\nPLEASE!!! enter number of OVERS\n";

        cin >> overs;
        cout << "\n"
             << name1 << " ,,START playing";
        sum1 = multiply(overs);
        cout << "\n " << name2 << " ,START playing \n";
        sum2 = multiply(overs);
        if (sum1 > sum2)
            cout << name1 << "has WON and his score is--" << sum1 << endl;
        else
            cout << "\n " << name2 << " has WON and his score is --" << sum2 << endl;
    }
    if (x == 3)
    {
        cout << " click 1 to play with computer o 2 to play to play with your friend you can choose the numbers from 1-6 to score \n START PLAY AND HAVE FUN";
    }
}