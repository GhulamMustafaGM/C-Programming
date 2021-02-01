
#include <iostream>
using namespace std;
string x;
int main()
{
    cout << "Lets play rock paper scissors" << endl;
    cin >> x;
    if ((x == "paper") || (x == "Paper"))
    {
        cout << "Scissors, you lost";
    }
    else if ((x == "scissors") || (x == "Scissors"))
    {
        cout << "Rock, you lost";
    }
    else if ((x == "rock") || (x == "Rock"))
    {
        cout << "Paper, you lost";
    }
    else
    {
        cout << "Something went wrong, enter rock paper or scissors";
    }

    return 0;
}