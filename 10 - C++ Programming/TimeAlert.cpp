// time alert

#include <iostream>;
using namespace std;

int main()
{
    int a;
    cout << "Enter the time" << endl;
    cin >> a;
    if (a >= 1 && a <= 6)
    {
        cout << "Why you don't sleep?" << endl;
    }
    else if (a >= 7 && a <= 13)
    {
        cout << "Good morning!" << endl;
    }
    else if (a >= 14 && a <= 18)
    {
        cout << "Good afternoon!" << endl;
    }
    else if (a >= 19 && a <= 22)
    {
        cout << "Good night!" << endl;
    }
    else if (a >= 23 && a <= 24)
    {
        cout << "Go to sleep!!!" << endl;
    }
    else
    {
        cout << " ERROR! \n Enter the time without minutes or a real time." << endl;
    }
    return 0;
}
