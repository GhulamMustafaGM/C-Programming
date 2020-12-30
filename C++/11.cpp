/* C++ program - check leap year or not 

-> if year is divided by 4 but not by 100, then it is a leap year.
-> if year is divided by both 100 and 400, then it is a leap year.
-> if year is divided by 400, then it is a leap year
-> and in all other cases, it is not a leap lear.

*/

#include <iostream>
using namespace std;

int main()
{
    int yr;

    cout << "\nEnter year: ";
    cin >> yr;

    if ((yr % 4 == 0) && (yr % 100 != 0))
    {
        cout << "This is a Leap Year " << endl;
    }
    else if ((yr % 100 == 0) && (yr % 400 == 0))
    {
        cout << "This is a Leap Year" << endl;
    }
    else if (yr % 400 == 0)
    {
        cout << "This is a Leap Year" << endl;
    }
    else
    {
        cout << "This is not a Leap Year" << endl;
    }
    return 0;
}

/*output
Enter year: 2004
This is a Leap Year
*/