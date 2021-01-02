// Tester

#include <iostream>
using namespace std;

int main()
{
    int mark;
    cin >> mark;

    if (mark < 50)
    {
        cout << "You failed." << endl;
        cout << "Sorry." << endl;
        if (mark < 20)
        {
            cout << "You will never pass." << endl;
        }
    }
    else
    {
        cout << "You passed." << endl;
        if (mark == 100)
        {
            cout << "perfect." << endl;
        }
    }

    return 0;
}