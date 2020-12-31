#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b;

    cout << "Enter 10.";
    cin >> b;

    if (b == a)
    {
        cout << "What a good Employee!!" << endl;
    }
    else
    {
        cout << "Sorry!, your are not selected..!!" << endl;
    }

    return 0;
}