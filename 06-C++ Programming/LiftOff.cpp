// Lift off - while loop

#include <iostream>
using namespace std;

int main()
{
    int c = 0;
    int count = 10;
    do
    {
        cout << count << endl;
        count--;
        c++;

    } while (c <= 10);
    cout << "Falcon heavy has lift off!" << endl;

    return 0;
}