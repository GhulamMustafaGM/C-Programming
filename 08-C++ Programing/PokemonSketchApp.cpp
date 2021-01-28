// Pkemon sketch

#include <windows.h> // ; p
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

/*

a practice project


input enter a number from 1 to 4

- pokemon only know 4 from the games


*/

/****************************************

          Pokemon class

****************************************/

class Pokemon
{

public:
    Pokemon() {}

    ~Pokemon() {}

    struct Move
    {

        string moveName;
        string moveDescription;

        string moveType;

        string moveEffect; //burn, freeze

        int moveSpecialAttack;

        int movePhysicalAttack;

        int moveAccuracy;

        int movePowerPoints;

    } move1, move2, move3, move4;

    // use methods to call one of four moves

    // set move for slot 1
    void setMoveSlot1(string skillName, string skillDescription, string skillType, string skillEffect, int skillPhysicalAttack, int skillSpecialAttack, int skillAccuracy, int skillPowerPoints);

    // set move for slot 2

    void setMoveSlot2(string skillName, string skillDescription, string skillType, string skillEffect, int skillPhysicalAttack, int skillSpecialAttack, int skillAccuracy, int skillPowerPoints);

    // set move for slot 3

    void setMoveSlot3(string skillName, string skillDescription, string skillType, string skillEffect, int skillPhysicalAttack, int skillSpecialAttack, int skillAccuracy, int skillPowerPoints);

    // set move for slot 4

    void setMoveSlot4(string skillName, string skillDescription, string skillType, string skillEffect, int skillPhysicalAttack, int skillSpecialAttack, int skillAccuracy, int skillPowerPoints);

    void moveSection(int choice);

    void checkMove(Move &check);
    // getters

    string getPokemonName();

    string getPokemonAttributeType();

    int getPokemonHealthPoints();

    int getPokemonLevel();

    int getPokemonPhysicalAttack();

    int getPokemonSpecialAttack();

    int getPokemonSpeed();

    int getPokemonExperiencePoints();

    // setters

    void setPokemonName(string pName);

    void setPokemonAttributeType(string pAttribute);

    void setPokemonHealthPoints(int pHp);

    void setPokemonLevel(int pLv);

    void setPokemonPhysicalAttack(int pAttack);

    void setPokemonSpecialAttack(int pSpecialAttack);

    void setPokemonSpeed(int pSpeed);

    void setPokemonExperiencePoints(int pExperience);

    // fight methods

    // gain experience

    void gainExperiencePoints(int experienceGained);

    // add level up feature

    void pokemonLevelUp();

    // check stats

    void checkStats();

private:
    // string values

    string pokemonName;

    string pokemonAttributeType;

    // interger values

    int pokemonHealthPoints;

    int pokemonLevel;

    int pokemonPhysicalAttack;

    // add defence

    int pokemonSpecialAttack;

    // add SpecialDefence

    int pokemonSpeed;

    int pokemonExperiencePoints;
};

void Pokemon ::setMoveSlot1(string skillName, string skillDescription, string skillType, string skillEffect, int skillPhysicalAttack, int skillSpecialAttack, int skillAccuracy, int skillPowerPoints)
{

    // need all details

    move1.moveName = skillName;

    move1.moveDescription = skillDescription;

    move1.moveEffect = skillEffect;

    move1.moveType = skillType;

    move1.movePhysicalAttack = skillPhysicalAttack;

    move1.moveSpecialAttack = skillSpecialAttack;

    move1.moveAccuracy = skillAccuracy;

    move1.movePowerPoints = skillPowerPoints;
}

void Pokemon ::setMoveSlot2(string skillName, string skillDescription, string skillType, string skillEffect, int skillPhysicalAttack, int skillSpecialAttack, int skillAccuracy, int skillPowerPoints)
{

    // need all details

    move2.moveName = skillName;

    move2.moveDescription = skillDescription;

    move2.moveType = skillType;

    move2.moveEffect = skillEffect;

    move2.movePhysicalAttack = skillPhysicalAttack;

    move2.moveSpecialAttack = skillSpecialAttack;

    move2.moveAccuracy = skillAccuracy;

    move2.movePowerPoints = skillPowerPoints;
}

void Pokemon ::setMoveSlot3(string skillName, string skillDescription, string skillType, string skillEffect, int skillPhysicalAttack, int skillSpecialAttack, int skillAccuracy, int skillPowerPoints)
{

    // need all details

    move3.moveName = skillName;

    move3.moveDescription = skillDescription;

    move3.moveType = skillType;

    move3.moveEffect = skillEffect;

    move3.movePhysicalAttack = skillPhysicalAttack;

    move3.moveSpecialAttack = skillSpecialAttack;

    move3.moveAccuracy = skillAccuracy;

    move3.movePowerPoints = skillPowerPoints;
}

void Pokemon ::setMoveSlot4(string skillName, string skillDescription, string skillType, string skillEffect, int skillPhysicalAttack, int skillSpecialAttack, int skillAccuracy, int skillPowerPoints)
{

    // need all details

    move4.moveName = skillName;

    move4.moveDescription = skillDescription;

    move4.moveType = skillType;

    move4.moveEffect = skillEffect;

    move4.movePhysicalAttack = skillPhysicalAttack;

    move4.moveSpecialAttack = skillSpecialAttack;

    move4.moveAccuracy = skillAccuracy;

    move4.movePowerPoints = skillPowerPoints;
}

/*to activate/ use one of four moves

need more to be used

- target

- detect type of move 

- damage function

- effect function

- accuracy 


*/

void Pokemon ::moveSection(int tm)
{

    switch (tm)
    {

    case 1:

        break;

    case 2:

        break;

    case 3:

        break;

    case 4:

        break;

    default:

        cout << "\nInvalid selection\n";

        break;
    }
}

void Pokemon ::checkMove(Move &check)
{

    // one struct

    cout << check.moveName;

    if (check.movePhysicalAttack > 0)
    {

        cout << "\nPhysical attack\n";

        cout << "\n"
             << (*this).getPokemonName() << " Deals " << int(double(check.movePhysicalAttack) * (double((*this).getPokemonPhysicalAttack()) / 100)) << " Damage!\n";
    }

    else if (check.moveSpecialAttack > 0)
    {

        cout << "\nSpecial attack\n";

        cout << "\n"
             << (*this).getPokemonName() << " Deals " << int(double(check.moveSpecialAttack) * (double((*this).getPokemonSpecialAttack()) / 100)) << " Damage!\n";
    }

    else
    {

        cout << "\nEffect move?";
    }
}

//getters

string Pokemon ::getPokemonName()
{

    return pokemonName;
}

string Pokemon ::getPokemonAttributeType()
{

    return pokemonAttributeType;
}

int Pokemon ::getPokemonHealthPoints()
{

    return pokemonHealthPoints;
}

int Pokemon ::getPokemonLevel()
{

    return pokemonLevel;
}

int Pokemon ::getPokemonPhysicalAttack()
{

    return pokemonPhysicalAttack;
}

int Pokemon ::getPokemonSpecialAttack()
{

    return pokemonSpecialAttack;
}

int Pokemon ::getPokemonSpeed()
{

    return pokemonSpeed;
}

int Pokemon ::getPokemonExperiencePoints()
{

    return pokemonExperiencePoints;
}

// setters

void Pokemon ::setPokemonName(string pName)
{

    pokemonName = pName;
}

void Pokemon ::setPokemonAttributeType(string pAttribute)
{

    pokemonAttributeType = pAttribute;
}

void Pokemon ::setPokemonHealthPoints(int pHp)
{

    pokemonHealthPoints = pHp;
}

void Pokemon ::setPokemonLevel(int pLv)
{

    pokemonLevel = pLv;
}

void Pokemon ::setPokemonPhysicalAttack(int pAttack)
{

    pokemonPhysicalAttack = pAttack;
}

void Pokemon ::setPokemonSpecialAttack(int pSpecialAttack)
{

    pokemonSpecialAttack = pSpecialAttack;
}

void Pokemon ::setPokemonSpeed(int pSpeed)
{

    pokemonSpeed = pSpeed;
}

void Pokemon ::setPokemonExperiencePoints(int pExperience)
{

    pokemonExperiencePoints = pExperience;
}

void Pokemon ::gainExperiencePoints(int experienceGained)
{

    setPokemonExperiencePoints(getPokemonExperiencePoints() + experienceGained);

    cout << "\n\n"
         << this->getPokemonName() << " gained " << experienceGained << " XP!\n";
}

// level up method

void Pokemon ::pokemonLevelUp()
{

    pokemonHealthPoints = this->getPokemonHealthPoints() + (rand() % 6);

    pokemonLevel = this->getPokemonLevel() + 1;

    pokemonPhysicalAttack = this->getPokemonPhysicalAttack() + (rand() % 5);

    pokemonSpecialAttack = this->getPokemonSpecialAttack() + (rand() % 5);

    pokemonSpeed = this->getPokemonSpeed() + (rand() % 5);
}

void Pokemon ::checkStats()
{

    cout << "\n\n"
         << this->getPokemonName() << "\n";
    cout << "\nLevel " << this->getPokemonLevel() << "\n";

    cout << "\nAttack " << this->getPokemonPhysicalAttack() << "\n";

    cout << "\nSpecial Attack " << this->getPokemonSpecialAttack() << "\n";

    cout << "\nSpeed " << this->getPokemonSpeed() << "\n\n";
}

/*********************************

       Jolteon class

**********************************/

class Jolteon : public Pokemon
{

public:
    Jolteon();

    Jolteon(string id, int health, int level, int phyAttack, int specAttack, int speed);

    ~Jolteon();

    // move for slot one 1

    void setDoubleKick();

    // move for slot one 2

    void setSignalBeam();

    // move for slot one 3

    void setThunderBolt();

    // move for slot one 4

    void setLastResort();

    // sets 4 moves in one function

    void loadMoves()
    {

        setDoubleKick();
        setSignalBeam();
        setThunderBolt();
        setLastResort();
    }

private:
    // string values

    string pokemonName;

    string pokemonAttributeType = "electric";

    // interger values

    int pokemonHealthPoints;

    int pokemonLevel;

    int pokemonPhysicalAttack;

    int pokemonSpecialAttack;

    int pokemonSpeed;
};

Jolteon ::Jolteon()
{
}

Jolteon ::Jolteon(string name, int health, int level, int phyAttack, int specAttack, int speed)
{

    setPokemonName(name);
    setPokemonHealthPoints(health);
    setPokemonLevel(level);
    setPokemonPhysicalAttack(phyAttack);
    setPokemonSpecialAttack(specAttack);
    setPokemonSpeed(speed);
}

Jolteon ::~Jolteon()
{
}

// move 1

void Jolteon ::setDoubleKick()
{

    string name = "Double Kick";

    string description = "The target is quickly kicked twice in succession using both feet.";

    string type = "fight";

    string effect = "none";

    int physicalAttack = 60;

    int specialAttack = 0;

    int accuracy = 100;

    int powerPoints = 30;

    setMoveSlot1(name, description, type, effect, physicalAttack, specialAttack, accuracy, powerPoints);
}

// move 2

void Jolteon ::setSignalBeam()
{

    string name = "Signal Beam";

    string description = "The user attacks with a sinister beam of light. This may also confuse the target.";

    string type = "bug";

    string effect = "confuse";

    int physicalAttack = 0;

    int specialAttack = 75;

    int accuracy = 100;

    int powerPoints = 15;

    setMoveSlot2(name, description, type, effect, physicalAttack, specialAttack, accuracy, powerPoints);
}

void Jolteon ::setThunderBolt()
{

    string name = "Thunder Bolt";

    string description = "A strong electric blast crashes down on the target. This may also leave the target with paralysis.";

    string type = "electric";

    string effect = "stun";

    int physicalAttack = 0;

    int specialAttack = 90;

    int accuracy = 100;

    int powerPoints = 15;

    setMoveSlot3(name, description, type, effect, physicalAttack, specialAttack, accuracy, powerPoints);
}

void Jolteon ::setLastResort()
{

    string name = "Last resort";

    string description = "This move can be used only after the user has used all the other moves it knows in the battle.";

    string type = "normal";

    string effect = "none";

    int physicalAttack = 140;

    int specialAttack = 0;

    int accuracy = 100;

    int powerPoints = 0;

    setMoveSlot4(name, description, type, effect, physicalAttack, specialAttack, accuracy, powerPoints);
}

//

class MGameLoop
{

public:
    MGameLoop();

    ~MGameLoop();

    // add save method

    void inception();

private:
};

// MGameLoop .cpp

MGameLoop ::MGameLoop()
{
}

MGameLoop ::~MGameLoop()
{
}

void MGameLoop ::inception()
{

    Jolteon luz("Luz", 100, 23, 54, 73, 80);

    luz.loadMoves();

    luz.checkStats();

    cout << "\n\nAfter level up\n";

    luz.pokemonLevelUp();

    luz.checkStats();

    // obj.checkMove(obj.struct_prototype);

    int moveSel = 0;

    cin >> moveSel;

    switch (moveSel)
    {

    case 1:

        luz.checkMove(luz.move1);

        break;

    case 2:

        luz.checkMove(luz.move2);

        break;

    case 3:

        luz.checkMove(luz.move3);

        break;

    case 4:

        luz.checkMove(luz.move4);

        break;

    default:

        cout << "\nTry 1-4 to choose a move";

        break;
    }
}

// main function

int main()
{

    srand(time(0));

    MGameLoop start;

    start.inception();

    return 0;
}