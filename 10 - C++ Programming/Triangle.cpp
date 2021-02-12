// Triangle

#include <iostream>
using namespace std;

//Input height of the triangle

int main()
{
    int height;
    cin >> height;
    cout << "Triangle" << endl;
    for (int i = 0; i < height; i++)
    {
        for (int b = 0; b <= i; b++)
        {
            cout << " *";
        }
        cout << endl;
    }
    return 0;
}
