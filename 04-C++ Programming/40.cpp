// Level + operator Overloading

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

/*

- update march 31

- added random values for stat increase

- adding new stat


input a name

example:

Batman

example 2:

John Smith

*/

class Player
{

public:
    // empty constructor
    Player()
    {
    }

    // inline set method included in constructor body

    Player(int hp, int att, int spe) : health(hp), attack(att), speed(spe)
    {

        //  does the same as about but can be used multiple times

        setHealth(hp);
        setAttack(att);
        setSpeed(spe);
    }

    // if a name is given in the first aruement

    Player(string alias, int hp, int att, int spe) : health(hp), attack(att), speed(spe)
    {

        setName(alias);
        setHealth(hp);
        setAttack(att);
        setSpeed(spe);
    }

    // Destructor

    ~Player()
    {
    }

    // declare overload

    Player operator+(Player &obj);
    Player operator=(Player &obj);

    // Setters

    // to set or change health

    void setHealth(int hp)
    {

        health = hp;
    }

    // to set or change attack

    void setAttack(int att)
    {

        attack = att;
    }

    // to change defence value

    void setDefence(int def)
    {

        defence = def;
    }

    // to set or change name

    void setSpeed(int spe)
    {

        speed = spe;
    }

    // to set or change name

    void setName(string alias)
    {

        name = alias;
    }
    // Getters

    // to recieve health from private

    int getHealth()
    {

        return health;
    }

    // to recieve attack from private

    int getAttack()
    {

        return attack;
    }

    // to recieve defence from private

    int getDefence()
    {

        return defence;
    }

    // to recieve speed from private

    int getSpeed()
    {

        return speed;
    }

    // to recieve name from private

    string getName()
    {

        return name;
    }

    void checkStats()
    {

        cout << "\n\n"
             << this->getHealth() << " HP\n";

        cout << "\n"
             << this->getAttack() << " Attack\n";

        cout << "\n"
             << this->getSpeed() << " Speed\n";
    }

private:
    // Private variables

    int health;

    int attack;

    int defence;

    int speed;

    // string variables

    string name;
};

// class_As_Data_Type class_Name :: operator+(class_Name& obj)

//class& takes the address of object as arguement

Player Player::operator+(Player &obj)
{

    int after_health = health + obj.health;

    int after_attack = attack + obj.attack;

    int after_speed = speed + obj.speed;

    cout << "\n\n\t\t*** Level Up! ***\n\n";

    return Player(after_health, after_attack, after_speed);
}

// gives character a name

string selectName()
{

    string p1Name;

    cin >> p1Name;

    // in case no input is given

    if (p1Name == "")
    {
        string nameList[] = {"Alex", "Allan", "Red", "Blue", "Ruby", "Sapphire", "Grey", "Leon"};

        // Create counter for nameList

        int nameListSize = 0;

        // start counting loop

        // basic_string<char> long for string but gives less errors

        for (basic_string<char> ex : nameList)
        {

            //for each value in nameList array nameListSize increases by 1

            nameListSize++;

            // cout << "namelists size is " << nameListSize << "\n\n";
        }

        // get random name from list

        string p1Name = nameList[rand() % nameListSize];

        return p1Name;
    }
    else
    {

        // if user gives a name

        return p1Name;
    }
}

// to keep main clear, moved into function

void levelUpContent()
{

    // seeding random once and not again

    srand(time(0));

    // function to name the character

    string id = selectName();

    //create Player object

    Player p1_level_1(id, 100, 50, 20);

    cout << p1_level_1.getName() << " stats before leveling up\n";

    // outputs health, attack, and speed value before level up

    p1_level_1.checkStats();

    // creates object for stat increase

    Player lvlUp((rand() % 5) + 1, (rand() % 3) + 1, (rand() % 3) + 1);

    // creates overloaded object by adding values of Level 1 p1 and lvlup for Level 2 p1

    Player p1_level_2 = p1_level_1 + lvlUp;

    // carry character name to new object

    p1_level_2.setName(p1_level_1.getName());

    cout << "\n"
         << p1_level_2.getName() << " stats after leveling up\n";

    // outputs health, attack, and speed value after level up

    p1_level_2.checkStats();
}

int main()
{

    levelUpContent();

    return 0;
}

/* ouput 

2 3 4 45
2 stats before leveling up


100 HP

50 Attack

20 Speed


                *** Level Up! ***


2 stats after leveling up


102 HP

52 Attack

23 Speed

*/