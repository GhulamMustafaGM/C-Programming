/*Goal: Practice array manipulation in C++. 
**The user will input 40 integers. 
**Put them into an array. Then print the array in the order the numbers were
**entered. Then print in reverse order. Then sort the array in ascending order 
**and print it. 
**The each print of the array should separate the numbers in the array by
**one space. 
**For example: the array were [3,4,55] the printout would be 3 4 55
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int userInput[40];

    for (int i = 0; i < 40; i++)
    {
        cout << " ";
        cin >> userInput[i];
    }

    cout << "\nThe array \n";
    for (int i = 0; i < 40; i++)
    {
        cout << userInput[i] << " ";
    }

    // reverse order numbers

    cout << "\n\nThe array in reverse order\n";
    for (int i = 39; i >= 0; i--)
    {
        cout << userInput[i] << " ";
    }

    // sortings

    for (int i = 0; i < 40; i++)
    {
        for (int j = 0; j < 39 - i; j++)
        {
            if (userInput[j] > userInput[j + 1])
            {
                int temp;
                temp = userInput[j];
                userInput[j] = userInput[j + 1];
                userInput[j + 1] = temp;
            }
        }
    }
    cout << "\n\nThe array sorted\n";
    for (int i = 0; i < 40; i++)
    {
        cout << userInput[i] << " ";
    }
    return 0;
}

/* output 

 43 32 21 23 43 98 90 65 53 42 69 79 82 7 1 63 64 90 87 96 4 55 3 7 2 1 67 89 543 567 984 34 975 890 4576 23 33 9 56 345 9865

The array
43 32 21 23 43 98 90 65 53 42 69 79 82 7 1 63 64 90 87 96 4 55 3 7 2 1 67 89 543 567 984 34 975 890 4576 23 33 9 56 345

The array in reverse order
345 56 9 33 23 4576 890 975 34 984 567 543 89 67 1 2 7 3 55 4 96 87 90 64 63 1 7 82 79 69 42 53 65 90 98 43 23 21 32 43

The array sorted
1 1 2 3 4 7 7 9 21 23 23 32 33 34 42 43 43 53 55 56 63 64 65 67 69 79 82 87 89 90 90 96 98 345 543 567 890 975 984 4576

*/