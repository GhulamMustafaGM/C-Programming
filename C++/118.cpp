#include <iostream>
using namespace std;

int main()
{
    int num;

    do
    {
        cout << "\nEnter a number (100 to stop): ";
        cin >> num;
    } while (num != 100);
    return 0;
}

/*

Enter a number (100 to stop): 3

Enter a number (100 to stop): 3

Enter a number (100 to stop): 100
*/