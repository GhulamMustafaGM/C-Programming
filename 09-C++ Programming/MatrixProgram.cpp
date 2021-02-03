// 8x8 dot matrix display editor

#include <iostream>
#include <string>
using namespace std;

//data 64 bit (8x8) u64
typedef unsigned long long u64;

// characters
char dot = 111;  //o
char space = 32; //space

//draw code
void draw(u64 code);

int main()
{
    string dm;
    //dot matrix 0 -off 1 -on
    dm += "0 0 0 0 0 0 0 0";
    dm += "0 0 0 0 0 0 0 0";
    dm += "0 1 1 0 0 1 1 0";
    dm += "0 1 1 0 0 1 1 0";
    dm += "0 0 0 0 0 0 0 0";
    dm += "1 1 0 0 0 0 1 1";
    dm += "0 1 1 1 1 1 1 0";
    dm += "0 0 1 1 1 1 0 0";

    //Convert to hex code
    u64 num = 0;
    for (int i = dm.length() - 1; i >= 0; i--)
    {
        if (dm[i] != ' ')
            num <<= 1;
        if (dm[i] == '1')
            num++;
    }
    cout << showbase << hex;
    cout << "Hex code: " << num;
    cout << endl;

    //draw
    draw(num);

    return 0;
}

//draw code
void draw(u64 code)
{
    cout << "+-----------------+\n";
    for (int i = 0; i < 8; i++)
    {
        cout << "| ";
        for (int j = 0; j < 8; j++)
        {
            u64 mask = (u64)1 << (i * 8) + j;
            if (code & mask)
                cout << dot;
            else
                cout << space;
            cout << space;
        }
        cout << "|\n";
    }
    cout << "+-----------------+\n";
}
