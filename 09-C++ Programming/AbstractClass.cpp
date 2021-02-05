// Abstract classes


#include <iostream>
using namespace std;

// Enemy base class
class Enemy
{
public:
    virtual void attack()
    {
        cout << "Enemy - attack()!" << endl;
    }
    virtual void defend()
    {
        cout << "Enemy - defend()!" << endl;
    }
    virtual void retreat()
    {
        cout << "Enemy - retreat()!" << endl;
    }
};


class Ninja : public Enemy
{
public:
    void attack()
    {
        cout << "Ninja - attack()!" << endl;
    }
    void defend()
    {
        cout << "Ninja - defend()!" << endl;
    }
    void retreat()
    {
        cout << "Ninjas don't retreat - Get back in the fight!" << endl;
    }
};

class Monster : public Enemy
{
public:
    void attack()
    {
        cout << "Monster - attack()!" << endl;
    }
    void defend()
    {
        cout << "Monster - defend()!" << endl;
    }
    void retreat()
    {
        cout << "Monster - retreat()!" << endl;
    }
};

int main()
{
    // The battle...
    Ninja n1;
    Ninja n2;
    Monster m1;
    Enemy e1;
    Enemy e2;

    Enemy *a1 = &n1;
    Enemy *a2 = &n2;
    Enemy *a3 = &m1;
    Enemy *a4 = &e1;
    Enemy *a5 = &e2;

    a1->attack();
    a2->attack();
    a3->defend();
    a3->attack();
    a1->defend();
    a2->defend();
    a4->attack();
    a1->defend();
    a5->attack();
    a3->defend();
    a3->retreat();
}