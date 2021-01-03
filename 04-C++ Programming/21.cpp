// C++ Program - Driving license

#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age >= 18 && age < 60)
    {
        cout << " You are eligible man....what are u waiting for!!!! get your driving license today. \n";
    }
    else
    {
        if (age < 18 && age >= 13)
        {

            cout << "You still have" << 18 - age << "Years of wait......have a little more patience.";
        }
    }
    if (age >= 1 && age < 13)
    {
        cout << "You still have " << 18 - age << " Years of wait but first enjoy your child hood.";
    }

    if (age == 0)
    {
        cout << " First start walking baby .....You have a long way to go.";
    }

    if (age < 0)
    {
        cout << "Dont try to fool me ......I am not a programmer to be fooled. How can anyone have his/her age in negetive numbers.";
    }
    try
    {

        if (age >= 101)
        {
            throw 99;
        }
    }
    catch (int x)
    {
        cout << "Wrong age values - Error " << x;
    }
    if (age >= 60 && age <= 100)
    {
        cout << "Sorry Sir! But you are too old to drive";
    }

    return 0;
}