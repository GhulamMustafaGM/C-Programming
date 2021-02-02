// Draw Program

#include <iostream>
using namespace std;
int width = 10, lengh = 10;
void Draw()
{
    for (int i = 0; i < width; i++)
        ;
    cout << "#";
    cout << endl;

    for (int i = 0; i < lengh; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (j == 0 || j == lengh - 1)
                cout << "#";
            cout << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < width; i++)
        ;
    cout << "#";
    cout << endl;
}

int main()
{
    Draw();
    return 0;
}
