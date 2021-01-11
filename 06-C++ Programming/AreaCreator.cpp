// Area creator

//useless area drawer by Lucas Knook 2018
#include <iostream>
using namespace std;

class field
{
public:
    void Create_Area(int area)
    {

        //setup for the field list
        string field[area][area];

        //assign "1" to all rows and collums and print the area
        for (int x = 0; x < area; x++)
        {
            for (int y = 0; y < area; y++)
            {
                field[y][x] = "# ";
                cout << field[y][x];
            }
            cout << endl;
        }
    }
};

int main()
{
    field obj;          //create an instance obj of class field
    obj.Create_Area(1); //draws an area with length and width of parameter
    return 0;
}
