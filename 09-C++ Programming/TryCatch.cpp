#include <iostream>
using namespace std;
string roses = "red";
string violets = "blue";
int main()
{
    try
    {

        if (roses == "red")
            throw roses;
    }
    catch (string x)
    {
        cout << "Roses are " << x;
    }

    try
    {

        if (violets == "blue")
            throw violets;
    }
    catch (string x)
    {
        cout << " violets are " << x << "!\n";
    }

    try
    {
        string msg = "\nunexpected: '}' on line 32!";
        if (roses == "red" && violets == "blue")
            throw msg;
    }
    catch (string x)
    {
        cout << x;
    }
    return 0;
}