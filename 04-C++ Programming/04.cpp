// Simple game with menu 

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
//I suggest trying it on PC or some other app because it is bugged here
int choice;
int p1, p2, num;

int GetInput()
{
    int choice;
    cin >> choice;
    return choice;
}

void DisplayMainMenu()
{
    cout << "===========" << endl;
    cout << "|Main Menu|" << endl;
    cout << "===========" << endl;
    cout << "1 - Instructions\n";
    cout << "2 - Start Game\n";
    cout << "3 - Options\n";
    cout << "4 - Quit\n";
    cout << "Selection: ";
}

void OptionsMenu()
{
    cout << "==============" << endl;
    cout << "|Options Menu|" << endl;
    cout << "==============" << endl;
    cout << "1 - Resolution\n";
    cout << "2 - Sound\n";
    cout << "3 - Back\n";
    cout << "Selection: ";
}

void Options()
{
    int choice = 0;
    do
    {
        system("cls");
        OptionsMenu();
        choice = GetInput();
        switch (choice)
        {
        case 1:
            cout << "Resolution stuff";
            system("pause");
            cout << "Press Enter to go back to MainMenu" << endl;
            break;
        case 2:
            cout << "Sound stuff";
            system("pause");
            cout << "Press Enter to go back to MainMenu" << endl;
            break;
        default:
            break;
        }
    } while (choice != 3);
}

void instructions()
{
    cout << "<Instructions>" << endl;
    cout << "Both players bet a number and the closest number wins" << endl;
}

void game()
{
    srand(time(NULL));
    num = rand() % 100 + 1;
    cout << "player 1:";
    cin >> p1;
    cout << "player 2:";
    cin >> p2;
    cout << "the number is:" << num << endl;
    if (abs(num - p1) > abs(num - p2))
    {
        cout << "player 2 wins" << endl
             << "Congratulations!" << endl;
        ;
    }
    else
    {
        cout << "player 1 wins" << endl
             << "Congratulations!" << endl;
    }
}

int main(int argc, char *argv[])
{
    choice = 0;

    do
    {
        system("cls");
        DisplayMainMenu();
        choice = GetInput();
        switch (choice)
        {
        case 1:
            instructions();
            cout << "Press Enter to go back to MainMenu" << endl;
            system("pause");
            break;
        case 2:
            game();
            system("pause");
            cout << "Press Enter to go back to MainMenu" << endl;
        case 3:
            Options();
            break;
        case 4:
            cout << "Leaving The Game";
            break;
        default:
            break;
        }
    } while (choice != 4);
    return EXIT_SUCCESS;
}