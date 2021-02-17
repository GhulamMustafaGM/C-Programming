// classess prog.
/* 

In this program create a class called Cats. It has three private members: name, breed, age. Create all the set 
and get functions as well as a printInfo function: setName, setBreed, setAge, getName, getBreed, getAge, 
printinfo.

*/

// main.hpp

/*Header file for main.cpp
**Create a class called Cat.
**Create the following members:
**private members: name, breed, age
**public members: setName, setBreed,setAge
**getName, getBreed, getAge, printInfo*/

#include <iostream>
using namespace std;

class Cat
{
    string name;
    string breed;
    int age;

public:
    void setName(string nameIn);
    void setBreed(string breedIn);
    void setAge(int ageIn);
    string getName();
    string getBreed();
    int getAge();
    void printInfo();
};

void Cat::setName(string nameIn)
{
    name = nameIn;
}

void Cat::setBreed(string breedIn)
{
    breed = breedIn;
}

void Cat::setAge(int ageIn)
{
    age = ageIn;
}
string Cat::getName()
{
    return name;
}
string Cat::getBreed()
{
    return breed;
}
int Cat::getAge()
{
    return age;
}
void Cat::printInfo()
{
    cout << name << " " << breed << " " << age;
}

// main.cpp

/*Goal: practice creating and using classes.
**Create a class called Cat.
**Create the following members:
**private members: name, breed, age
**public members: setName, setBreed,setAge
**getName, getBreed, getAge, printInfo*/

#include "main.hpp"

int main()
{
    Cat cat1, cat2;
    cat1.setName("Kimmy");
    cat2.setName("Bobby");
    cat1.setBreed("calico");
    cat2.setBreed("main coon");
    cat1.setAge(4);
    cat2.setAge(1);

    cat1.printInfo();
    cout << "\n";
    cat2.printInfo();
    cout << "\n\n";
    //Alternate printing method
    cout << cat1.getName() << " " << cat1.getBreed() << " " << cat1.getAge() << "\n";
    cout << cat2.getName() << " " << cat2.getBreed() << " " << cat2.getAge();
    return 0;
}

/* output 

Kimmy calico 4
Bobby main coon 1

Kimmy calico 4
Bobby main coon 1

*/