// Pronic Nubmers

#include <iostream>
using namespace std;

//test the code for different number


int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << number << endl
         << endl;

    int i = 1;
    int newNumber;

x:
    newNumber = i * (i + 1);
    if (newNumber == number)
    {
        cout << number << " is a pronic number";
    }
    // Checking till i value becomes 99
    else if (i < 100)
    {
        i++;
        goto x;
    }
    else
    {
        cout << number << " is not a pronic number";
    }

    return 0;
}