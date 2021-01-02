// Biodata program

/* Title:Create employee bio-data using following classes i) Personal record ii))Professional record iii) Academic record Assume appropriate 
    data members and member function to accept required data & print bio-data. Create bio-data using multiple inheritance using C++.
ASSIGNMENT NO. : 
GROUP          : 
ROLL NO.       : 
BATCH          : 
*/

#include <iostream>
using namespace std;
class personal
{
protected:
    char name[50];
    char address[50];
    char birthdate[50];
    char gender;

public:
    void get_personal();
};
class professional
{
protected:
    int noofyearsexp;
    char orgname[50];
    char projname[50];
    char projdetails[50];

public:
    void get_professional();
};

class academic
{
protected:
    int year;
    int marks;
    int percentage;
    char Class[50];

public:
    void get_academic();
};
class biodata : public personal, public academic, public professional
{
public:
    void display();
};
void personal::get_personal()
{
    cout << "Enter name::";
    cin.getline(name, 50);
    cout << "Enter Address::";
    cin.getline(address, 50);
    cout << "Enter Birthdate(dd/mm/yyyy)::";
    cin >> birthdate;
    cout << "Enter gender(M/F)::";
    cin >> gender;
}
void professional::get_professional()
{
    cout << "Enter number of years of exp::";
    cin >> noofyearsexp;
    cout << "Enter organization name::";
    cin >> orgname;
    cout << "Enter project name::";
    cin.getline(projname, 50);
    cout << "Enter project Details::";
    cin.getline(projdetails, 50);
}
void academic::get_academic()
{
    cout << "Enter academic year::";
    cin >> year;
    cout << "Enter total marks::";
    cin >> marks;
    cout << "Enter percentage::";
    cin >> percentage;
    cout << "Enter class::";
    cin >> Class;
}
void biodata::display()
{

    cout << "---------------------Employee Biodata--------------" << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "____________________Personal Details__________________________" << endl;
    cout << "Name::" << name << endl;
    cout << "address::" << address << endl;
    cout << "birthdate::" << birthdate << endl;
    cout << "Gender::" << gender << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "________________Academic Details________________________" << endl;
    cout << "Academic Year "
         << "marks "
         << "percentage "
         << "class " << endl;
    cout << year << "\t\t0" << marks << "\t" << percentage << "\t" << Class << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "_______________Professional Details____________________" << endl;
    cout << "\nOrganization Name::" << orgname;
    cout << "\nYears of Experince::" << noofyearsexp;
    cout << "\nProject Done::" << projname;
    cout << "\nProject Details::" << projdetails << endl;
}
int main()
{
    biodata b;
    b.get_personal();
    b.get_academic();
    b.get_professional();
    b.display();
}

