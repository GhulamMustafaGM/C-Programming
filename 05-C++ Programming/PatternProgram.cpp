// Pattern program

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i < 6; i++)
    {
        for (int j = 0; j < i; j++)
            cout << char('a' + j);
        cout << endl;
    }
    return 0;
}