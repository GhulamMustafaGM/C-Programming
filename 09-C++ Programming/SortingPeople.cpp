// Sorting people list

#include <iostream>
#include <iomanip>
#include <string>
#include <list>
#include <cmath>
using namespace std;

class Person
{
private:
    string name;
    double height, weight; //cm and kg
public:
    Person(string n, double h = 0, double w = 0)
    {
        name = n;
        height = h; //cm
        weight = w; //kg
    }
    double BMI() const { return weight / pow(height / 100, 2); } //kg/m^2
    string Name() const { return name; }
    double Height() const { return height; }
    double Weight() const { return weight; }
    // sort by name
    bool operator<(Person b) { return name < b.name; }
    // sort by height
    friend bool byHeight(const Person &a, const Person &b);
    // to cout
    friend ostream &operator<<(ostream &o, const Person &p);
};

// sort by height
bool byHeight(const Person &a, const Person &b) { return a.height > b.height; }

// Person to cout
ostream &operator<<(ostream &o, const Person &p)
{
    o << setprecision(3);
    o << setw(10) << p.name;
    o << setw(5) << p.height << " cm";
    o << setw(5) << p.weight << " kg";
    o << setw(5) << p.BMI() << " kg/m^2";
    o << endl;
    return o;
}

int main()
{
    list<Person> staff;
    staff.push_back(Person("Joe", 182, 70));
    staff.push_back(Person("Thomas", 190, 102.5));
    staff.push_back(Person("Peter", 172.6, 76));
    staff.push_back(Person("Anna", 160, 43));
    //... etc.

    staff.sort(); // use operator <
    cout << "Sort by name" << endl;
    list<Person>::iterator it;
    for (it = staff.begin(); it != staff.end(); it++)
        cout << *it;

    staff.sort(byHeight); // use a function
    cout << endl
         << "Sort by height" << endl;
    for (it = staff.begin(); it != staff.end(); it++)
        cout << *it;

    staff.sort( // use lambda expression
        [](const Person &a, const Person &b) -> bool { return a.Weight() > b.Weight(); });
    cout << endl
         << "Sort by weight" << endl;
    for (it = staff.begin(); it != staff.end(); it++)
        cout << *it;

    return 0;
}