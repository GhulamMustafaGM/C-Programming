// Array searches

/*Goal: practice searching an array in C++
**There is an array of integers. The length of the arrays to be searched 
**varies. A user will enter an integer and the program will search the array.
**If the value is in the array, the program will return the location of 
**the element. If the value is not in the array, the user will be notified 
**that the value is not in the array. 
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int searchkey = 0;
    int searchArray[10] = {324, 4567, 6789, 5421345, 7, 65, 8965, 12, 342, 485};
    int location = 0;

    while (1)
    {
        cout << "Enter an integer: ('-1 to quit'): ";
        cin >> searchkey;
        cout << searchkey << endl;

        if (searchkey == -1)
        {
            break;
        }
        for (int i = 0; i < 10; i++)
        {
            if (searchkey == searchArray[i])
            {
                location = i;
                break;
            }
            location = -1;
        }
        if (location != -1)
        {
            cout << searchkey << " is at location " << location << " in the array. \n";
        }
        else
        {
            cout << searchkey << " is not in the array. " << endl;
        }
    }
    return 0;
}

/* output 

Enter an integer: ('-1 to quit'): 4567
4567
4567 is at location 1 in the array.
Enter an integer: ('-1 to quit'): 5421345
5421345
5421345 is at location 3 in the array.
Enter an integer: ('-1 to quit'): 5
5
5 is not in the array.
Enter an integer: ('-1 to quit'): 43
43
43 is not in the array.
Enter an integer: ('-1 to quit'): 7
7
7 is at location 4 in the array.
Enter an integer: ('-1 to quit'): 65
65
65 is at location 5 in the array.
Enter an integer: ('-1 to quit'): 8965
8965
8965 is at location 6 in the array.
Enter an integer: ('-1 to quit'): -1
-1

*/