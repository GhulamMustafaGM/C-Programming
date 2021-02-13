// person class

#include <iostream>
using namespace std;
class person
{
public:
    person(char name[], int age, bool sex);
    person();
    person(const person &);
    ~person();
    void output();
    void input();

private:
    char name[9];
    int age;
    bool sex;
};
void person ::person(const person &p)
{
    name = p.name
}
void person ::input()
{
    cout << "name :";
    cin >> name;
    cout << "age:";
    cin >> age;
    cout << "sex :";
    cin >> sex;
}
void person ::output()
{
    cout << "name :" << name << "age: "
         << "sex " << sex << endl;
}
void main()
{
    person p1, p2(p1);
    p1.input();
    p1.output();
}
