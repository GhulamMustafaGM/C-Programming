// rectangle in c++

#include <iostream>
using namespace std;

int main()
{
    int row, width, spaces;
    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the rectangle width: ";
    cin >> width;
    cout << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < width; j++)
            cout << "*";
        cout << endl;
    }
    return 0;
}