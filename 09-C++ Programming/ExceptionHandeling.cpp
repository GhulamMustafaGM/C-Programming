// exception handling

#include <iostream>
using namespace std;
void divide(int i, int j)
{
    try
    {
        cout << "in try block:\n";
        if (j != 0)
        {
            cout << "result=" << (float)i / j << endl;
        }
        if (j == 0)
        {
            throw j;
        }
    }

    catch (int k)
    {

        cout << "in catch block:\n";
        cout << "error occured,division cannot be possible by" << k << endl;
    }
}
int main()
{
    divide(6, 3);
    divide(3, 0);
}