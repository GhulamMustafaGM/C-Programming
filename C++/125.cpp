// play the game.
void play(int m)
{
    int t, x;

    for (t = 0; t < 10; t++)
    {
        cout << "Guess the number: ";
        cin >> x;
        if (x == m)
        {
            cout << "** Right ** \n";
            return 0;
        }
        else if (x < m)
            cout << "Too low. \n";
        else
            cout << "Too high. \n";
    }
    cout << "YUou\ve used up all your guesses. Try again.\n";
}

/* 

1. Get a new magic number
2. Play
3. Quit
Enter your choice:

*/