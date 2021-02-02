// Check passed or failed

#include <iostream>
using namespace std;
int main()
{
    int mark;
    cout << "enter number \n ";
    cin >> mark;
    if (mark < 50, mark != 0)
    {
        cout << "You failed." << endl;
        cout << "Sorry" << endl;
    }
    if (mark == 0)
    {
        cout << "you failed horribly" << endl;
    }
    if (mark > 50)
    {
        cout << "Congratulations!" << endl;
        cout << "You passed." << endl;
        cout << "You are awesome!" << endl;
    }
    return 0;
}
