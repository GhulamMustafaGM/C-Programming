// war simulator

#include <iostream>
using namespace std;

class Programmers
{
public:
    string view;
    int life;
    virtual int attack(void) = 0;
    virtual int defend() = 0;
};

class V1Coder : public Programmers
{
public:
    V1Coder()
    {
        view = "if() {\n.... ;}";
        life = 100;
    }
    int attack()
    {
        return 35;
    }
    int defend()
    {
        return 15;
    }
};

class V2Coder : public Programmers
{
public:
    V2Coder()
    {
        view = "if()\n{\n.... ;\n}";
        life = 100;
    }
    int attack()
    {
        return 40;
    }
    int defend()
    {
        return 10;
    }
};
V1Coder c1;
V2Coder c2;
Programmers *p1 = &c1;
Programmers *p2 = &c2;

void fight()
{

    for (; p1->life >= 30, p2->life >= 30;)
    {
        cout << "\n#C1 attacks C2 ";
        cout << "\n*C2 defends.";
        p2->life = (p2->life) - (p1->attack()) + (p2->defend());
        cout << "\n@C2 life : " << p2->life;
        cout << endl;
        cout << "\n#C2 attacks C1.";
        cout << "\n*C1 tackles it";
        p1->life = (p1->life) - (p2->attack()) + (p1->defend());
        cout << "\n@C1 life : " << p1->life;
        cout << endl;
    }
}

int main()
{

    cout << "           THE WAR\n          SIMULATOR\n";
    cout << "###    ";
    cout << "War between:    ###\n";
    cout << "\n@Coders 1 :\n\n"
         << p1->view;
    cout << "\n\n@Coders 2:\n\n"
         << p2->view;
    cout << endl;

    fight();

    cout << "\nBoth the groups of coders kept fighting until they saw this:" << endl
         << endl;
    cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$";
    cout << "\n\t\t\t\t\t\t\"DECLARE VARIABLES \n\t\t\t\t\t\t\t\t\t\t\t\tNOT WARS.\"";
    cout << "\n$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
    cout << "\nSo they stopped fighting on this silly thing.";
    cout << "\nBUT They are humans so now a new fight begins :";

    return 0;
}