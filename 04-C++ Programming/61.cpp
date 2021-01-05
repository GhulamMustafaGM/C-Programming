// Pointer structure program 

#include <iostream>
#include <string>
using namespace std;

struct teacher
{
    string name;
    int id;
    double salary;
};

int main()
{
    //this struct has no name ,so use ->
    teacher *p_teacher = new teacher;
    p_teacher->name = "chen";
    p_teacher->id = 1;
    p_teacher->salary = 10000.0;

    cout << "name: " << p_teacher->name << endl;
    cout << "id: " << p_teacher->id << endl;
    cout << "salary: " << p_teacher->salary;
    return 0;
}