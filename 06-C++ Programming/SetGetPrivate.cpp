// set get private name

#include <iostream>
#include <string>
using namespace std;

class myClass
{
public:
    myClass(string initName, int initAge)
    {
        setName(initName);
        setAge(initAge);
    }
    void setName(string x)
    {
        name = x;
    }
    void setAge(int y)
    {
        age = y;
    }
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }

private:
    string name;
    int age;
};

// function to print name and age
string printNameAge(string name, int age)
{
    cout << name << "," << age << endl;
    ;
}

int main()
{
    // initialize new object via constructor
    myClass myObj("none", 0);
    printNameAge(myObj.getName(), myObj.getAge());

    // modify object properties
    myObj.setName("John");
    myObj.setAge(24);
    printNameAge(myObj.getName(), myObj.getAge());

    return 0;
}