// Structure Program

#include <iostream>
#include <string>
using namespace std;
//struct1
struct inflatable
{
    string name;
    float volume;
    double price;
};
//struct2
struct student
{
    string name;
    int age;
    int id;
} student1;

//struct3
struct people
{
    string name;
    int age;
} people1 =
    {
        "xiao wang",
        29};

int main()
{
    struct inflatable guest
    {
        "wang",
            2.5,
            2.6
    };

    cout << "guest name: " << guest.name << endl;
    cout << "guest volume: " << guest.volume << endl;
    cout << "guest price: " << guest.price << endl
         << endl;

    student1 = {
        "wang zhi pan",
        25,
        1};
    cout << student1.name << endl
         << student1.age << endl
         << endl;
    cout << people1.name << endl
         << people1.age << endl;

    return 0;
}

/* ouput

guest name: wang
guest volume: 2.5
guest price: 2.6

wang zhi pan
25

xiao wang
29

*/