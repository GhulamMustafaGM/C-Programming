// Class factoreis

#include <iostream>
#include <stdlib.h>
using namespace std;
class factory
{
private:
    char namefactory[30];
    char place[20];
    int staff, workes;

public:
    void setnamefactory_setplace()
    {
        cin >> namefactory >> place;
    }
    void setstaff_setworkes()
    {
        cin >> staff >> workes;
    }
    void print()
    {
        cout << "namefactory=" << namefactory << endl
             << "place=" << place << endl
             << "staff=" << staff << endl
             << "workes=" << workes << endl;
    }
};

int main()
{
    factory ob;
    ob.setnamefactory_setplace();
    ob.setstaff_setworkes();
    ob.print();
    return 0;
    system("pause");
}
