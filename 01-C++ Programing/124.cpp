// Magic number program: Final improvement.

#include <iostream>
#include <cstdlib>
using namespace std;

void play(int m);

int main()
{
    int option;
    int magic;

    magic = rand();

    do
    {
        cout << "1. Get a new magic number\n";
        cout << "2. Play\n";
        cout << "3. Quit\n";

        do
        {
            cout << "Enter your choice: ";
            cin >> option;
        } while (option < 1 || option > 3);

        switch (option)
        {
        case 1:
            magic = rand();
            break;
        case 2:
            play(magic);
            break;
        case 3:
            cout << "Goodbye\n";
            break;
        }
    } while (option != 3);
    return 0;
}