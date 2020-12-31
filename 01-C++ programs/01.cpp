/*
C++ programming code to print all characters along with its ASCII values
*/
#include <iostream>

using namespace std;

int main()
{
    char chr;
    int value;

    for (value = 1; value < 255; value++)
    {
        cout << value << "->" << chr << "\t";
    }
    cout << endl;
    return 0;
}