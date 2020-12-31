// A simple addition drill program.

#include <iostream>
#include <cstdlib>
using namespace std;

void drill();

int count; // count and num_right are global
int num_right;

int main(int argc, char const *argv[])
{
    cout << "How many practice problems: ";
    cin >> count;

    num_right = 0;

    do
    {
        drill();
        count--;
    } while (count);
    cout << "You got " << num_right << " right.\n";
    return 0;
}

void drill()

{
    int count; /* This count is local na dunrelated to
				the global one. */
    int a, b, ans;

    // generate two number between 0 and 99.

    a = rand() % 100;
    b = rand() % 100;

    // The user gets three tries to get it right.

    for (count = 0; count < 3; count++)
    {
        cout << "What is " << a << " + " << b << "? ";
        cin >> ans;

        if (ans == a + b)
        {
            cout << "Right\n";
            num_right++;
            return;
        }
    }
    cout << "You have used up all your tries. \n";
    cout << "The answer is " << a + b << endl;
}

/* Output: 

How many practice problems: 2
What is 41 + 67? 108
Right
What is 34 + 0? 34
Right
You got 2 right.

*/