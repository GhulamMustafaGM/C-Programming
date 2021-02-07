// consturctors

#include <iostream>
#include <string>
using namespace std;

class Vanessa
{
public:
    Vanessa(string x, int y, string z)
    {
        setName(x);
        setAge(y);
        setLove(z);
    }

    void setName(string n)
    {
        Name = n;
    }
    void setAge(int a)
    {
        Age = a;
    }
    void setLove(string l)
    {
        Love = l;
    }

    string getName()
    {
        return Name;
    }
    int getAge()
    {
        return Age;
    }
    string getLove()
    {
        return Love;
    }

private:
    string Name;
    int Age;
    string Love;
};

int main()
{
    martin vo("martin.", 21, "tony.");

    cout << vo.getName() << endl;
    cout << vo.getAge() << endl;
    cout << vo.getLove() << endl;

    return 0;
}