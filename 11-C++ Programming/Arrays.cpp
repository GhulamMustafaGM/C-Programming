// Arrays
/* 
For this programming quiz, we are going to find the min and max and average of 15 numbers that a user will input.
The numbers range from 0 to 100. 
We will do it now for practice and then we will do it with arrays. So you do not have to keep all fifteen
numbers stored in memory. Find the min and max and average of 15 numbers that a user will input. The
numbers range from 0 to 100.
So you do not have to keep all fifteen numbers stored in memory.

*/

/*Find the min and max and average of 15 numbers that a user will input.
**The numbers range from 0 to 100. 
**We will do it now for practice and again later when we learn arrays and 
**functions. So you do not have to keep all fifteen numbers stored in memory.
**HINT: you will need to use scanf for input text.
*/

#include <iostream>

using namespace std;

int main()
{
    int userInput = 0;
    int maxNumber = 0;
    int minNumber = 100;
    int sumTotal = 0;
    float average = 0;

    // get the numbers from the user

    for (int i = 0; i < 15; i++)
    {
        cout << "Enter a number: ";
        cin >> userInput;
        cout << userInput << endl;

        if (userInput > maxNumber)
        {
            minNumber = userInput;
        }
        sumTotal = sumTotal + userInput;
    }
    cout << "Maxmum number = " << maxNumber << endl;
    cout << "Minimum number = " << minNumber << endl;

    average = sumTotal / 15.0;
    cout << "Average = " << average << endl;
    return 0;
}

/* output

Enter a number: 97
97
Enter a number: 55
55
Enter a number: 63
63
Enter a number: 89
89
Enter a number: 78
78
Enter a number: 69
69
Maxmum number = 0
Minimum number = 69
Average = 63.0667

*/