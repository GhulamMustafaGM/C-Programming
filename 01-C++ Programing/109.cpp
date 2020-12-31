// Magic Number program: 2nd improvement

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int magic;
    int guess;

    guess = magic;

    cout << "Enter your guess: " cin >> guess;

    if (guess == magic)
    {
        cout << "** Right ** " << endl;
        cout << magic << " is the magic number. " << endl;
    }
    else
    {
        cout << "...Sorry, you're wrong.";

        // use a nested if statement
        if (guess > magic)
            cout << "You guess is too high. \n";
        else
            cout << "Your guess is too low. \n";
    }

    return 0;
}

/* 
Enter your guess: 3
...Sorry, you're wrong.Your guess is too low.
*/