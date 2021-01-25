#include <iostream>
using namespace std;
enum Plan
{
    code = 1,
    eat = 2,
    read = 3,
    sleep = 4,
    drive = 5
};

int main()
{
    Plan act;
    for (act = code; act <= drive; act = static_cast<Plan>(act + 1))
    {
        switch (act)
        {
        case 1:
            cout << "priority " << act << ": code" << endl;
            break;
        case 2:
            cout << "priority " << act << ": eat" << endl;
            break;
        case 3:
            cout << "priority " << act << ": read" << endl;
            break;
        case 4:
            cout << "priority " << act << ": sleep" << endl;
            break;
        case 5:
            cout << "priority " << act << ": drive" << endl;
        }
    }

    return 0;
}
