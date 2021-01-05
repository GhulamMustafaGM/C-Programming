// Object Oriented Programming

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
    string get_name() const;
    void set_age(int age);
    int get_age() const;
    void show_people() const;
    const People &my_compare(const People &);
    ~People();
};
//constructor
People::People(string name)
{
    m_name = name;
}
string People::get_name() const
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

int People::get_age() const
{
    return m_age;
}

void People::show_people() const
{
    cout << "name: " << get_name() << " ,";
    cout << "age: " << get_age() << endl;
}

const People &People::my_compare(const People &pn)
{
    if (m_age < pn.get_age())
        return pn;
    else
        return *this; //use *this
}
int main()
{
    People p = People("wang");
    p.set_age(25);
    People p1 = People("maria");

    p1.set_age(28);
    p.show_people();
    p1.show_people();
    cout << "older is:\n";
    //compare age
    People p3 = p.my_compare(p1);
    p3.show_people();
    return 0;
}

/* output 

name: wang ,age: 25
name: maria ,age: 28
older is:
name: maria ,age: 28
~People() excuted
~People() excuted
~People() excuted

*/