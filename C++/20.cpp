/*C++ program - print prime numbers */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
()
{
    int start, end, i, j, count = 0;

    //to print all the prime number between any range
    //enter the two number (starting and ending)

    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    cout << "Prime number between " << start << " and " << end << " is:\n";
    for (i = start; i <= end; i++)
    {
        count = 0;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}
/*output
Enter starting number: 3
Enter ending number: 29
Prime number between 3 and 29 is:
3 5 7 11 13 17 19 23 29
*/