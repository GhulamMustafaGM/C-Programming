// Mindgame
// Test random numbers, scope and loops

#include <iostream>
#include <ctime>   //to enable use of srand() function
#include <cstdlib> //standard library to enable use of rand() function
using namespace std;

int main()
{
    srand(time(0));
    int guessNum, randomNum, count;
    count = 5;
    while (count > 0)
    {
        //prompt user for input
        cout << "Enter a random number\nwithin the range of 1 to 20" << endl;
        cout << "You win\nif the number you enter\nequals the random number generated" << endl;
        cin >> guessNum;
        //find random number
        randomNum = 1 + rand() % 20;
        //compare if randomNum is equal to guessNum
        if (randomNum != guessNum)
        {
            cout << "random number is: " << randomNum << endl;
            cout << "your choice is: " << guessNum << endl;
            cout << "Failed! try again" << endl;
        }
        if (randomNum == guessNum)
        {
            cout << "random number is: " << randomNum << endl;
            cout << "your choice is: " << guessNum << endl;
            cout << "Congratulations! You win";
            count--;
        }
        if (count == 0)
            cout << "Game Over!";
        return 0; //end program
    }
}