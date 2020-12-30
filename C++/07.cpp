/* c++ program - check even or odd */
#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number:";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "This is an even number";
        cout << endl;
    }
    else
    {
        cout << "This is an odd number";
    }

    return 0;
}

/* output 

Enter a number:20
This is an even number

*/