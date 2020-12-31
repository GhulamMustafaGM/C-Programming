#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char robchk[10];

    // answer in yes or other/no
    cout << "\nAre you a Robot ? ";
    cin >> robchk;

    int a = strcmp("yes", robchk);
    if (a == 0)
    {
        cout << "Sorry!!.. You cant't proceed." << endl;
    }
    else
    {
        cout << "Congrats!!. You can proceed. \n";
    }
    return 0;
}