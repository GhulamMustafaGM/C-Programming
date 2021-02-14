// Username and Password validation

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    //Welcome Module
    cout << "Welcome to password locker - alpha" << endl;

    //'a' input module

    cout << "Please enter your username" << endl;
    cin >> a;

    //'b' input module

    cout << "Please enter password" << endl;
    cin >> b;

    //username validation module

    if (a == 28)
    {
        cout << "Right usrid" << endl;
    }
    else
    {
        cout << "Wrong usrid or pswd" << endl;
    }

    //password validation module

    if (b == 11)
    {
        cout << "Right pswd" << endl;
    }
    else
    {
        cout << "Wrong usrid or pswd" << endl;
    }

    return 0;
}