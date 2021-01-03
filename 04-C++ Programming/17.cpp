// Protected with class

#include <iostream>
using namespace std;

class Mother
{
public:
    Mother(){};
    void sayHi()
    {
        cout << "Hi" << endl;
    }
    void sayPrivet()
    {
        if (say)
        {
            cout << "Privet 1" << endl;
        }
    }

protected:
    bool say = true;
};

class Daughter : public Mother
{
public:
    Daughter(){};

    void sayPrivet()
    {
        say = false;
        if (say)
        {
            cout << "Privet 2" << endl;
        }
        say = true;
    }
};

int main()
{
    Daughter d;
    d.sayHi();
    d.sayPrivet();
    Mother m;
    m.sayPrivet();
}