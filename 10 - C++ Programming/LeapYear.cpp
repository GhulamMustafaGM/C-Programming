// leap year

#include <iostream>
using namespace std;

int main()
{
    int year;

    cout << "Enter the year: ";
    cin >> year;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                cout << year << " Its leap year";

            else
                cout << year << " Its not leap year";
        }
        else
            cout << year << " Its leap year";
    }
    else
        cout << year << " Its not leap year";
    return 0;
}