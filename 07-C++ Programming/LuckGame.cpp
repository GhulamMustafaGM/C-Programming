// luck game program

#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int var;
    srand(time(0));
    var = rand() % 10;
    cout << "This is simple luck game \n\n"; /* what boredome does ^__^  */
    switch (var)
    {
    case 0:
        cout << "   you are gonna be the luckiest one alive";
        break;
    case 1:
        cout << "   you was lucky so far be prepared for the bad luck";
        break;
    case 2:
        cout << "   your gonna have a normal life";
        break;
    case 3:
        cout << "   your luck gonna make you so rich";
        break;
    case 4:
        cout << "   you are the unluckiest person alive ";
        break;
    case 5:
        cout << "   your are not lucky often but when you are something amazing happens";
        break;
    case 6:
        cout << "   your bad luck is turning to hapiness";
        break;
    case 7:
        cout << "   you are gonna make yourself proud someday";
        break;
    case 8:
        cout << "   your luck gonna kill you";
        break;
    case 9:
        cout << "   luck is coming looking for you";
        break;
    default:
        break;
    }
    return 0;
}