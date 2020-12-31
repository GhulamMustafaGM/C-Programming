// an example that uses variable initialization.

#include <iostream>
using namespace std;

void total(int x);

int main()
{
    cout << "Computing summation of 5. \n";
    total(5);

    cout << "\nComputing summation of 6. \n";
    total(6);

    return 0;
}

void total(int x)
{
    int sum = 0; // initialize sum
    int i, count;

    for (i = 1; i <= x; i++)
    {
        sum = sum + i;

        for (count = 0; count < 10; count++)
            cout << '.';
        cout << "The current sum is " << sum << endl;
    }
}

/* output

Computing summation of 5.
..........The current sum is 1
..........The current sum is 3
..........The current sum is 6
..........The current sum is 10
..........The current sum is 15

Computing summation of 6.
..........The current sum is 1
..........The current sum is 3
..........The current sum is 6
..........The current sum is 10
..........The current sum is 15
..........The current sum is 21

*/