/*C++ program - check prime or not */
#include <iostream>
using namespace std;

int main()
{
    int num, i, count = 0;

    cout << "\nEnter a number:";
    cin >> num;

    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            count++;
            break;
        }
    }
    if (count == 0)
    {
        cout << "This is a prime number" << endl;
    }
    else
    {
        cout << "This is not a prime number" << endl;
    }

    return 0;
}
/* output 
Enter a number:17
This is a prime number

Enter a number:18
This is not a prime number
*/