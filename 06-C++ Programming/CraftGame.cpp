// Craf game

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int steve;

char block = char(219);
char weakblock = char(176);
char gradientblock = char(177);
char lineblock = char(178);
char bowHandle = char(186);
char blade = char(205);
char handle = char(206);
char axeTop = char(222);
char axeBottom = char(223);
string cEquip = "";

string mobs[] = {"CREEPER", "ZOMBIE", "SKELETON", "SPIDER"};
string mob;

char blocks[5] = {block, weakblock, gradientblock, lineblock};

int blockcount[5] = {0, 0, 0, 0};

string blocknames[5] = {"Wood", "Stone", "Iron", "Diamond"};

int player(string equip, bool tree = false)
{
    string indent = "";
    for (int d = 0; d < 5; d++)
    {
        indent += " ";
    }
    string indentTwo = "";
    for (int b = 0; b < 4; b++)
    {
        indentTwo += " ";
    }
    string indentThree = "";

    for (int a = 0; a < 3; a++)
    {
        indentThree += " ";
    }

    if (tree)
    {
        cout << indent << "  " << blocks[0] << blocks[0] << indent << indent << " " << gradientblock << gradientblock << endl;
        cout << indent << "  " << blocks[3] << blocks[3] << indent;
        cout << indentTwo << gradientblock << gradientblock << block;
        cout << block << gradientblock << gradientblock << endl;
        cout << indent << blocks[0] << blocks[0] << blocks[0] << blocks[0] << indent;
        cout << indentTwo << gradientblock;
        cout << gradientblock << block << block << gradientblock << gradientblock << endl;
        cout << indent << blocks[0] << blocks[2] << blocks[2] << blocks[0] << indent;
        cout << indentTwo << gradientblock;
        cout << gradientblock << block << block << gradientblock << gradientblock << endl;
        cout << indent << blocks[3] << blocks[2] << blocks[2] << blocks[3] << indent;
        cout << indentThree << weakblock << gradientblock;
        cout << gradientblock << block << block << gradientblock << gradientblock << weakblock;
    }
    else
    {
        cout << indent << "  " << blocks[0] << blocks[0] << endl
             << indent << "  " << blocks[3] << blocks[3] << endl
             << indent
             << blocks[0] << blocks[0] << blocks[0] << blocks[0] << endl
             << indent
             << blocks[0] << blocks[2] << blocks[2] << blocks[0] << endl
             << indent << blocks[3] << blocks[2] << blocks[2] << blocks[3];
    }

    if (equip == "AXE")
    {
        cout << blade << blade << blade << axeTop;
    }
    else if (equip == "PICKAXE")
    {
        cout << blade << blade << ")";
    }
    else if (equip == "SHOVEL")
    {
        cout << blade << blade << char(220);
    }
    else if (equip == "DIAMOND SWORD")
    {
        cout << handle << blade << blade << "*";
    }

    if (tree)
    {
        cout << endl
             << indent << " " << blocks[2] << " " << blocks[2] << indent << indent << " " << block << block << endl
             << indent << " " << blocks[0] << " " << blocks[0] << indent << indent << " " << block << block;
    }
    else
    {
        cout << endl
             << indent << " " << blocks[2] << " " << blocks[2];
        if (equip == "AXE")
        {
            cout << " "
                 << " " << axeBottom << axeBottom;
        }
        cout << endl
             << indent << " " << blocks[0] << " " << blocks[0];
    }
}

int enemy(string eType = "CREEPER", string eWep = "")
{
    if (eType == "CREEPER")
    {
        cout << endl
             << endl
             << "A Creeper appeared!" << endl;

        cout << " " << lineblock << lineblock << endl;
        cout << " " << block << block << endl;
        cout << " " << block << block << endl;
        cout << block << " "
             << " " << block << endl;

        if (eWep == "DIAMOND SWORD" && (rand() % 5) < 4)
        {
            cout << endl
                 << "You beat the Creeper with your " << eWep;
            cout << endl
                 << "You picked up " << (rand() % 3) + 2 << " gunpowder and " << (rand() % 5) + 1 << " XP";
        }
        else if (eWep == "AXE" && (rand() % 4) < 3)
        {
            cout << endl
                 << "You beat the Creeper with your " << eWep;
            cout << endl
                 << "You picked up " << (rand() % 3) + 2 << " gunpowder and " << (rand() % 5) + 1 << " XP";
        }
        else if (eWep == "PICKAXE" && (rand() % 3) < 2)
        {
            cout << endl
                 << "You beat the Creeper with your " << eWep;
            cout << endl
                 << "You picked up " << (rand() % 3) + 2 << " gunpowder and " << (rand() % 5) + 1 << " XP";
        }
        else if (eWep == "SHOVEL" && (rand() % 2) < 1)
        {
            cout << endl
                 << "You beat the Creeper with your " << eWep;
            cout << endl
                 << "You picked up " << (rand() % 3) + 2 << " gunpowder and " << (rand() % 5) + 1 << " XP";
        }
        else
        {
            cout << endl
                 << "The Creeper blew you up!";
        }
    }
    if (eType == "ZOMBIE")
    {
        cout << endl
             << endl
             << "A Zombie appeared!" << endl;

        cout << " "
             << " " << block << block << endl;
        cout << " "
             << " " << lineblock << lineblock << endl;
        cout << block << block << block << block << "__" << endl;
        cout << block << gradientblock << gradientblock << block << "__" << endl;
        cout << weakblock << block << block << weakblock << endl;
        cout << " " << gradientblock << " " << gradientblock << endl;

        if (eWep == "DIAMOND SWORD" && (rand() % 5) < 4)
        {
            cout << endl
                 << "You beat the Zombie with your " << eWep;
            cout << endl
                 << "You picked up " << (rand() % 3) + 2 << " rotton flesh and " << (rand() % 5) + 1 << " XP";
        }
        else if (eWep == "AXE" && (rand() % 4) < 3)
        {
            cout << endl
                 << "You beat the Zombie with your " << eWep;
            cout << endl
                 << "You picked up " << (rand() % 3) + 2 << " rotton flesh and " << (rand() % 5) + 1 << " XP";
        }
        else if (eWep == "PICKAXE" && (rand() % 3) < 2)
        {
            cout << endl
                 << "You beat the Zombie with your " << eWep;
            cout << endl
                 << "You picked up " << (rand() % 3) + 2 << " rotton flesh and " << (rand() % 5) + 1 << " XP";
        }
        else if (eWep == "SHOVEL" && (rand() % 2) < 1)
        {
            cout << endl
                 << "You beat the Zombie with your " << eWep;
            cout << endl
                 << "You picked up " << (rand() % 3) + 2 << " rotton flesh and " << (rand() % 5) + 1 << " XP";
        }
        else
        {
            cout << endl
                 << "The Zombie ate your brain!";
        }
    }
    if (eType == "SKELETON")
    {
        cout << endl
             << endl
             << "A Skeleton appeared!" << endl;

        cout << " "
             << " " << block << block << endl;
        cout << " "
             << " " << lineblock << lineblock << endl;
        cout << block << block << block << block << "__" << bowHandle << "\\"
             << " "
             << "-->" << endl;
        cout << block << gradientblock << gradientblock << block << "__" << bowHandle << "/" << endl;
        cout << weakblock << block << block << weakblock << endl;
        cout << " " << gradientblock << " " << gradientblock << endl;

        if (eWep == "DIAMOND SWORD" && (rand() % 5) < 4)
        {
            cout << endl
                 << "You beat the Skeleton with your " << eWep;
            cout << endl
                 << "You picked up " << (rand() % 3) + 2 << " bones";
            if ((rand() % 3) < 1)
            {
                cout << ", it's bow";
            }
            if ((rand() % 3) < 1)
            {
                cout << ", " << (rand() % 4) + 1 << " arrows";
            }
            cout << " and " << (rand() % 5) + 1 << " XP";
        }
        else if (eWep == "AXE" && (rand() % 4) < 3)
        {
            cout << endl
                 << "You beat the Skeleton with your " << eWep;
            cout << endl
                 << "You picked up " << (rand() % 3) + 2 << " bones";
            if ((rand() % 3) < 1)
            {
                cout << ", it's bow";
            }
            if ((rand() % 3) < 1)
            {
                cout << ", " << (rand() % 4) + 1 << " arrows";
            }
            cout << " and " << (rand() % 5) + 1 << " XP";
        }
        else if (eWep == "PICKAXE" && (rand() % 3) < 2)
        {
            cout << endl
                 << "You beat the Skeleton with your " << eWep;
            cout << endl
                 << "You picked up " << (rand() % 3) + 2 << " bones";
            if ((rand() % 3) < 1)
            {
                cout << ", it's bow";
            }
            if ((rand() % 3) < 1)
            {
                cout << ", " << (rand() % 4) + 1 << " arrows";
            }
            cout << " and " << (rand() % 5) + 1 << " XP";
        }
        else if (eWep == "SHOVEL" && (rand() % 2) < 1)
        {
            cout << endl
                 << "You beat the Skeleton with your " << eWep;
            cout << endl
                 << "You picked up " << (rand() % 3) + 2 << " bones";
            if ((rand() % 3) < 1)
            {
                cout << ", it's bow";
            }
            if ((rand() % 3) < 1)
            {
                cout << ", " << (rand() % 4) + 1 << " arrows";
            }
            cout << " and " << (rand() % 5) + 1 << " XP";
        }
        else
        {
            cout << endl
                 << "The Skeleton shot you with it's bow and arrow, and defeated you!";
        }
    }
    if (eType == "SPIDER")
    {
        cout << endl
             << endl
             << "A Spider appeared!" << endl;

        cout << " " << gradientblock << gradientblock << gradientblock << gradientblock << endl;
        cout << block << block << lineblock << lineblock << block << block << endl;
        cout << "|"
             << " "
             << "|"
             << " "
             << "|"
             << " "
             << "|" << endl;

        if (eWep == "DIAMOND SWORD" && (rand() % 5) < 4)
        {
            cout << endl
                 << "You beat the spider with your " << eWep;
            cout << endl
                 << "You picked up " << (rand() % 3) + 2 << " string";
            if ((rand() % 3) < 1)
            {
                cout << ", " << (rand() % 3) + 2 << " spider eyes";
            }
            cout << " and " << (rand() % 5) + 1 << " XP";
        }
        else if (eWep == "AXE" && (rand() % 4) < 3)
        {
            cout << endl
                 << "You beat the Spider with your " << eWep;
            cout << endl
                 << "You picked up " << (rand() % 3) + 2 << " string";
            if ((rand() % 3) < 1)
            {
                cout << ", " << (rand() % 3) + 2 << " spider eyes";
            }
            cout << " and " << (rand() % 5) + 1 << " XP";
        }
        else if (eWep == "PICKAXE" && (rand() % 3) < 2)
        {
            cout << endl
                 << "You beat the Spider with your " << eWep;
            cout << endl
                 << "You picked up " << (rand() % 3) + 2 << " string";
            if ((rand() % 3) < 1)
            {
                cout << ", " << (rand() % 3) + 2 << " spider eyes";
            }
            cout << " and " << (rand() % 5) + 1 << " XP";
        }
        else if (eWep == "SHOVEL" && (rand() % 5) < 4)
        {
            cout << endl
                 << "You beat the spider with your " << eWep;
            cout << endl
                 << "You picked up " << (rand() % 3) + 2 << " string";
            if ((rand() % 3) < 1)
            {
                cout << ", " << (rand() % 3) + 2 << " spider eyes";
            }
            cout << " and " << (rand() % 5) + 1 << " XP";
        }
        else
        {
            cout << endl
                 << "You became the Spider's next victim!";
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
    }

    cout << endl;
}

int main()
{
    srand(time(NULL));

    cout << "MINECRAFT - SOLOLEARN EDITION" << endl
         << "Made by Jayden LeCorps, remixed by rowsej" << endl
         << endl;

    steve = player(cEquip, true);
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
        cout << "You crafted a Wooden Shovel with " << 20 << " Wood!";
        cEquip = "SHOVEL";
    }
    else
    {
        cout << "You don't have enough Wood in this world to craft a Wooden Shovel! You need 20.";
    }

    cout << endl
         << endl;

    if (blockcount[1] >= 30)
    {
        cout << "You crafted a Stone Pickaxe with " << 30 << " Stone!";
        cEquip = "PICKAXE";
    }
    else
    {
        cout << "You don't have enough Stone in this world to craft a Stone Pickaxe! You need 30.";
    }

    cout << endl
         << endl;

    if (blockcount[2] >= 35)
    {
        cout << "You crafted a Iron Axe with " << 35 << " Iron!";
        cEquip = "AXE";
    }
    else
    {
        cout << "You don't have enough Iron in this world to craft a Iron Axe! You need 35.";
    }

    cout << endl
         << endl;

    if (blockcount[3] >= 40)
    {
        cout << "You crafted a Diamond Sword with " << 40 << " Diamonds!";
        cEquip = "DIAMOND SWORD";
    }
    else
    {
        cout << "You don't have enough Diamonds in this world to craft a Diamond Sword! You need 40.";
    }

    cout << endl
         << endl;

    steve = player(cEquip);

    mob = mobs[rand() % 4];
    mob = enemy(mob, cEquip);

    cout << endl
         << endl
         << "Thanks for playing! New features coming soon!" << endl
         << endl;
    cout << "Because mobs, mob loot and ores are different each time, be sure to play again for another result!";

    cout << endl
         << endl
         << "Please comment if something goes wrong, or if you think I should add something else!" << endl
         << "Also upvote if you like this!";

    return 1;
}