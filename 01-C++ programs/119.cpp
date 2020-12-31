// Magic number porgram: 3rd improvement.

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int magic;
    int guess;

    magic = rand();

    do
    {
        cout << "Enter your guess:";
        cin >> guess;
        cout << "*** Right ***";
        cout << magic << " is the magic number.\n ";
        else
        {
            cout << "...Sorry, you're wrong.";
            if (guess > magic)
                cout << " Your guess is too high.\n";
            else
                cout << " Your guess is too low.\n";
        }

    } while (guess != magic);
    return 0;
}

/* 

Enter your guess:3
...Sorry, you're wrong. Your guess is too low.
Enter your guess:89
...Sorry, you're wrong. Your guess is too high.

*/