// Class and objects

#include <iostream>
#include <string>
using namespace std;

class People
{
private:
    string m_name;
    int m_age;

public:
    People(string name);
    string get_name();
    void set_age(int age);
    int get_age();
    ~People();
};

People::People(string name)
{
    m_name = name;
}
string People::get_name()
{
    return m_name;
}

People::~People()
{
    cout << "~People() excuted\n";
}

void People::set_age(int age)
{
    m_age = age;
}

int People::get_age()
{
    return m_age;
}
int main()
{
    People p("wang");
    p.set_age(100);
    cout << "name: " << p.get_name() << endl;
    cout << "age: " << p.get_age() << endl;
    return 0;
}