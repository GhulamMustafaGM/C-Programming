// Mini Craft Program 

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

char block = char(219);
char weakblock = char(176);
char gradientblock = char(177);
char lineblock = char(178);
char blade = char(205);
char handle = char(206);
string cEquip = "";

char blocks[5] = {block, weakblock, gradientblock, lineblock};

int blockcount[5] = {0, 0, 0, 0};

string blocknames[5] = {"Stone", "Iron", "Copper", "Gold"};

string enemies[3] = {"Creeper", "Skeleton"};

int player(string equip = "Pickaxe")
{

    string indent = " ";

    for (int i = 0; i < rand() % 50; i++)
    {
        indent += " ";
    }

    cout << indent << "  " << blocks[0] << blocks[0] << endl
         << indent << "  " << blocks[3] << blocks[3] << endl
         << indent
         << blocks[0] << blocks[0] << blocks[0] << blocks[0] << endl
         << indent
         << blocks[0] << blocks[2] << blocks[2] << blocks[0] << endl
         << indent << blocks[3] << blocks[2] << blocks[2] << blocks[3];

    if (equip == "Sword")
    {
        cout << handle << blade << blade;
    }
    else if (equip == "Pickaxe")
    {
        cout << blade << blade << ")";
    }
    else if (equip == "Gold Wand")
    {
        cout << blade << blade << blade << "*";
    }

    cout << endl
         << indent << " " << blocks[2] << " " << blocks[2] << endl
         << indent << " " << blocks[0] << " " << blocks[0];
}

int enemy(string eType = "Creeper", string eWep = "")
{

    if (eType == "Creeper")
    {
        cout << endl
             << endl
             << "A Creeper appeared!" << endl
             << endl;

        cout << " " << char(223) << endl
             << char(221) << " " << char(221) << endl
             << " " << char(223) << " " << endl
             << " " << char(223) << endl
             << char(223) << char(223);
        if (eWep == "Gold Wand" || eWep == "Sword")
        {
            cout << endl
                 << "You beat the Creeper and got gunpowder!";
        }

        else
        {
            cout << endl
                 << "You were defeated by the Creeper!"
                 << " I guess a " << eWep << " isnt good enough!";
        }
    }

    if (eType == "Skeleton")
    {
        cout << endl
             << endl
             << "A Skeleton appeared!" << endl
             << endl;

        cout << "  " << char(219) << endl
             << char(221) << char(223) << " " << char(221) << endl
             << "  " << char(223) << "  " << endl
             << "  " << char(223) << endl
             << " " << char(221) << char(221) << endl;
        if (eWep == "Gold Wand")
        {
            cout << endl
                 << "You beat the Skeleton and got a bone!";
        }

        else
        {
            cout << endl
                 << "You were defated by the Skeleton!"
                 << " I guess a " << eWep << " isnt good enough!";
        }
    }
}

int createWorld(bool create = false)
{
    cout << endl;
    for (int i = i; i < 300; i++)
    {
        int a = rand() % 8;

        if (a > 4)
        {
            cout << " ";
            continue;
        }
        else if (a == 0)
        {
            blockcount[0]++;
        }
        else if (a == 1)
        {
            blockcount[1]++;
        }
        else if (a == 2)
        {
            blockcount[2]++;
        }
        else if (a == 3)
        {
            blockcount[3]++;
        }

        cout << blocks[a];

        if (blockcount[0] >= 20)
        {
        }

        else if (blockcount[1] >= 30)
        {
        }

        else if (blockcount[2] >= 35)
        {
        }

        else if (blockcount[3] >= 40)
        {
        }
    }

    cout << endl;
}

int main()
{
    srand(time(NULL));

    cout << "MINECRAFT -> platform" << endl
         << endl;

    int myplayer = player(cEquip);
    int world = createWorld(true);

    cout << endl
         << "In this world:" << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << blockcount[i] << " " << blocknames[i] << " " << blocks[i] << endl;
    }

    cout << endl
         << "Log: " << endl
         << endl;

    if (blockcount[0] >= 20)
    {
        cout << "You crafted a Stone Sword with " << 20 << " Stone!";
        cEquip = "Sword";
    }
    else
    {
        cout << "You dont have enough Stone in this world to craft a Stone Sword! You need 20.";
    }

    cout << endl
         << endl;

    if (blockcount[1] >= 30)
    {
        cout << "You crafted a Iron Pickaxe with " << 30 << " Iron!";
        cEquip = "Pickaxe";
    }
    else
    {
        cout << "You dont have enough Iron in this world to craft a Iron Pickaxe! You need 30.";
    }

    cout << endl
         << endl;

    if (blockcount[2] >= 35)
    {
        cout << "You crafted a Copper Sword with " << 35 << " Copper!";
        cEquip = "Sword";
    }
    else
    {
        cout << "You dont have enough Copper in this world to craft a Copper Sword! You need 35.";
    }

    cout << endl
         << endl;

    if (blockcount[3] >= 40)
    {
        cout << "You crafted a Gold Wand with " << 40 << " Gold!";
        cEquip = "Gold Wand";
    }
    else
    {
        cout << "You dont have enough Gold in this world to craft a Gold Wand! You need 40.";
    }

    cout << endl
         << endl;

    int newPlyr = player(cEquip);

    cout << endl
         << "Time to battle!";

    int creeper = enemy(enemies[(rand() % 2)], cEquip);

    cout << endl
         << "" << endl
         << endl
         << "Make sure to run again for another result!!!";

    return 0;
}